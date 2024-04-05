#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_OpenButton_clicked();

private:
    QPair<long, long> setTree(const QString &folderPath, QTreeWidgetItem *parentItem);
    Ui::MainWindow *ui;
    void countFoldersAndFiles(const QString& path, int& folderCount, int& fileCount);
};
#endif // MAINWINDOW_H
