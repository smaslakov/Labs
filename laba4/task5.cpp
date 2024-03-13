
#include <iostream>

using namespace std;

// Функция для построения магического квадрата четного порядка
void buildEvenMagicSquare(int** square, int n) {
    int num = 1;

    // Заполняем квадрат числами от 1 до n^2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            square[i][j] = num++;
        }
    }

    // Меняем значения в квадрате, чтобы получить магический квадрат
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = square[i][j];
            square[i][j] = square[i + n / 2][j + n / 2];
            square[i + n / 2][j + n / 2] = temp;
        }
    }

    for (int i = 0; i < n / 2; i++) {
        for (int j = n / 2; j < n; j++) {
            int temp = square[i][j];
            square[i][j] = square[i + n / 2][j - n / 2];
            square[i + n / 2][j - n / 2] = temp;
        }
    }
}

// Функция для построения магического квадрата нечетного порядка
void buildOddMagicSquare(int** square, int n) {
    int row = n - 1;
    int col = n / 2;
    square[row][col] = 1;

    for (int i = 2; i <= n * n; i++) {
        if (square[(row + 1) % n][(col + 1) % n] == 0) {
            row = (row + 1) % n;
            col = (col + 1) % n;
        }
        else {
            row = (row - 1 + n) % n;
        }
        square[row][col] = i;
    }
}

// Функция для печати квадрата
void printSquare(int** square, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Введите порядок квадрата: ";
    cin >> n;

    // Создаем динамический двумерный массив для хранения квадрата
    int** square = new int*[n];
    for (int i = 0; i < n; i++) {
        square[i] = new int[n];
    }

    // Проверяем порядок квадрата и вызываем соответствующую функцию
    if (n % 2 == 0) {
        buildEvenMagicSquare(square, n);
    }
    else {
        buildOddMagicSquare(square, n);
    }

    cout << "Магический квадрат:" << endl;
    printSquare(square, n);

    // Освобождаем память, выделенную для массива
    for (int i = 0; i < n; i++) {
        delete[] square[i];
    }
    delete[] square;

    return 0;
}


