#include <string>
#include "iostream"
#include "library_task1.h"
#include "library_struct.h"
plane* arr_maker (int n){
    int  y = 1;
    plane* a = new plane [n];
    int j = 1;
    for(int i = 0;i < n;++i) {
       /* while (y) {*/
            std::cout << "\n" << "Plane number " << j;
            std::cout << "\n" << "Enter the arrival placement: ";
            std::cin >> a[i].arrival_placement;
            std::cout << "\n" << "Enter the departure time(Example: 12:30;23:30...): ";
            std::cin >> a[i].time;
            std::string check = a[i].time;
            if(check[2] != ':' || check.length() != 5){
                std::cout<<"Wrong input"<<"\n";
                break;
            }
            std::cout << "\n" << "Enter the number of plane(Only int,example:1236123): ";
            std::cin >> a[i].number;
            std::cout << "\n" << "Enter the plane type: ";
            std::cin >> a[i].plane_type;
            j++;
           /* std::cout << "\n" << "Enter 1 if u want to continue input,and 0 if u don't";
            std::cin >> y;
        }*/
    }

    return a;
}
void deletePlaneArray(plane* arr, int size) {
    delete[] arr;
}
long long str_to_ld(std::string a){
    long long hours = a[0] * 10 + a[1];
    long long minutes = a[3] * 10 + a[4] + (hours * 60);
    return minutes;
}

int partition(plane* a, int low, int high) {
    std::string pivot = a[high].time;
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (str_to_ld(a[j].time) <str_to_ld(pivot)) {
            i++;
            std::swap(a[i], a[j]);
        }
    }

    std::swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(plane* a, int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void print_arr(plane * a, int n,std::string place) {
    int counter = 0;
    std::cout << "Flights to destination "<<place<< ":\n";
    for (int i = 0; i < n; i++) {
        if (a[i].arrival_placement == place) {
            std::cout << "Flight Number: "<<a[i].number<<"\t"<<"Departure time: "<<"\t"<<a[i].time<<"\t"<<"The plane type: "<<a[i].plane_type<<"\n";
            counter++;
        }
    }
    if (counter == 0){
        std::cout<<"There are no planes with arrival place";
    }
}
plane* add_elem(plane* a, int n) {
    plane *b = new plane[n + 1];
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    deletePlaneArray(a, n);
    std::cout << "\n" << "Enter the arrival placement: ";
    std::cin >> b[n].arrival_placement;
    std::cout << "\n" << "Enter the departure time: ";
    std::cin >> b[n].time;
    std::cout << "\n" << "Enter the number of plane: ";
    std::cin >> b[n].number;
    std::cout << "\n" << "Enter the plane type: ";
    std::cin >> b[n].plane_type;
    return b;
}
void elem_search(plane *a ,int n){
    int num;
    std::cout<<"\n"<<"Enter the number of plane that you need";
    std::cin>>num;
    for(int i = 0;i < n;++i){
        if(a[i].number == num){
            std::cout<<"\n"<< "Flight Number: "<<a[i].number<<"\t"<<"Departure time: "<<"\t"<<a[i].time<<"\t"<<"The plane type: "<<a[i].plane_type;
        }
    }
}
void print_all(plane* a, int n){
    for(int i = 0;i < n;++i){
        std::cout<<"\n"<< "Flight Number: "<<a[i].number<<"\t"<<"Departure time: "<<"\t"<<a[i].time<<"\t"<<"The plane type: "<<a[i].plane_type;
    }
}
plane* del_element(plane* a,int n,int index){
    index--;
    if(index >= 0 && index < n) {
        for (int i = index; i < n - 1; ++i) {
            a[i] = a[i + 1];
        }
    }
    else std::cout<<"Error,wrong input"<<"\n";
    return a;
}
plane* change_elem(plane *a, int n, int index) {

    index--;
    if(index >= 0 && index < n) {
        std::cout << "\n" << "Enter the arrival placement: ";
        std::cin >> a[index].arrival_placement;
        std::cout << "\n" << "Enter the departure time: ";
        std::cin >> a[index].time;
        std::cout << "\n" << "Enter the number of plane: ";
        std::cin >> a[index].number;
        std::cout << "\n" << "Enter the plane type: ";
        std::cin >> a[index].plane_type;
    }
    else std::cout<<"Error,wrong input"<<"\n";
    return a;
}

