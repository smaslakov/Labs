#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::countFoldersAndFiles(const QString& path, int& folderCount, int& fileCount)
{
    QDir dir(path);
    dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot);

    QFileInfoList fileList = dir.entryInfoList();
    foreach (const QFileInfo& fileInfo, fileList) {
        if (fileInfo.isDir()) {
            folderCount++;
            countFoldersAndFiles(fileInfo.filePath(), folderCount, fileCount);
        } else {
            fileCount++;
        }
    }
}

void MainWindow::on_OpenButton_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(this, "Выберите папку", QDir::homePath());

    if (!folderPath.isEmpty()) {
        int folderCount = 0;
        int fileCount = 0;
        countFoldersAndFiles(folderPath, folderCount, fileCount);
        ui->filesCount->setText(QString::number(fileCount));
        ui->foldersCount->setText(QString::number(folderCount));
    } else {
        QMessageBox::warning(this, "Warning", "Wrong data");
        return;
    }
    QTreeWidgetItem *rootItem = new QTreeWidgetItem(ui->treeWidget);
    rootItem->setText(0, folderPath);
    setTree(folderPath, rootItem);
}

QPair<long, long> MainWindow::setTree(const QString &folderPath, QTreeWidgetItem *parentItem) {
    QDir folder(folderPath);
    QFileInfoList entries = folder.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot | QDir::Files);

    int folderCount = 0;
    int fileCount = 0;

    for (const QFileInfo &entry : entries) {
        if (entry.isDir()) {
            QTreeWidgetItem *subfolderItem = new QTreeWidgetItem(parentItem);
            subfolderItem->setText(0, entry.fileName());
            QPair<long, long> childCount = setTree(entry.filePath(), subfolderItem);

        } else if (entry.isFile()) {
            QTreeWidgetItem *fileItem = new QTreeWidgetItem(parentItem);
            fileItem->setText(0, entry.fileName());
        }
    }

    QPair<long, long> ret {folderCount, fileCount};
    return ret;
}
