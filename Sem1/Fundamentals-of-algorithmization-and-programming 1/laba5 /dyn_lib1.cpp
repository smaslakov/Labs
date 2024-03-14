#include <iostream>
#include "library_dyn_polyanochka.h"
void printSize(int *array) {
    // Здесь массив рассматривается как указатель
    std::cout << sizeof(array) << '\n'; // выведется размер указателя, а не длина массива!
}
