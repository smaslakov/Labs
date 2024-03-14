#include <string>
#include "library_struct.h"
struct plane;
plane* arr_maker (int n);
void deletePlaneArray(plane* arr, int size);
long long str_to_ld(std::string a);
int partition(plane* a, int low, int high);
void quickSort(plane* a, int low, int high);
void print_arr(plane * a, int n,std::string place);
plane* add_elem(plane* a, int n);
void elem_search(plane *a ,int n);
void print_all(plane* a, int n);
plane* del_element(plane* a,int n,int index);
plane* change_elem(plane *a, int n, int index);
#ifndef LABA7_LIBRARY_TASK1_H
#define LABA7_LIBRARY_TASK1_H

#endif //LABA7_LIBRARY_TASK1_H
