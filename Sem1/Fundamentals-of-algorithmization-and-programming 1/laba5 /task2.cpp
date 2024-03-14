#include <iostream>
#include "library_dyn_polyanochka.h"
int main() {
    int array[] = { 1, 2, 3, 4, 4, 9, 15, 25 };
    std::cout << sizeof(array) << '\n'; // выведется sizeof(int) * длина массива
    printSize(array); // здесь аргумент array распадается на указатель
    return 0;
}

