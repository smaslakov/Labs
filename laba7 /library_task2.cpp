#include "library_task2.h"
#include <string>
#include "iostream"
#include "library_struct.h"

bus* arr_maker (int n){
    bus* a = new bus [n];
    int j = 1;
    for(int i = 0;i < n;++i) {
        std::cout << "\n" << "Bus number " << j;
        std::cout << "\n" << "Enter the number of bus: ";
        std::cin >> a[i].number;
        std::cout << "\n" << "Enter the bus type: ";
        std::cin >> a[i].bus_type;
        std::cout << "\n" << "Enter the arrival placement: ";
        std::cin >> a[i].arrival_placement;
        std::cout << "\n" << "Enter the departure time(Example: 12:30;23:30...): ";
        std::cin >> a[i].departure_time;
        std::string check = a[i].departure_time;
        if(check[2] != ':' || check.length() != 5){
            std::cout<<"Wrong input"<<"\n";
            break;
        }
        std::cout << "\n" << "Enter the arrival time(Example: 12:30;23:30...): ";
        std::cin >> a[i].arrival_time;
        check = a[i].departure_time;
        if(check[2] != ':' || check.length() != 5){
            std::cout<<"Wrong input"<<"\n";
            break;
        }
        j++;
    }

    return a;
}
void deletePlaneArray(bus* arr, int size) {
    delete[] arr;
}
long long str_to_ll(std::string a){
    long long hours = a[0] * 10 + a[1];
    long long minutes = a[3] * 10 + a[4] + (hours * 60);
    return minutes;
}

void print_arr(bus * a, int n,std::string place,std::string time) {
    int counter = 0;
    std::cout << "Buses that going to the destination "<<place<<" earlier than "<<time<<":\n";
    for (int i = 0; i < n; i++) {
        if (a[i].arrival_placement == place) {
            if(str_to_ll(time) >= str_to_ll(a[i].arrival_time)) {
                std::cout << "Bus Number: " << a[i].number << "\t" << "The bus type: " << a[i].bus_type << "\t"
                          << "Departure time: " << a[i].departure_time << "\t" << "Arrival time: " << a[i].arrival_time
                          << "\n";
                counter++;
            }
        }
    }
    if (counter == 0){
        std::cout<<"There are no buses that fit your needs";
    }
}

bus* add_elem(bus* a, int n) {
    bus *b = new bus[n + 1];
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    deletePlaneArray(a, n);
    std::cout << "\n" << "Enter the number of bus: ";
    std::cin >> b[n].number;
    std::cout << "\n" << "Enter the bus type: ";
    std::cin >> b[n].bus_type;
    std::cout << "\n" << "Enter the arrival placement: ";
    std::cin >> b[n].arrival_placement;
    std::cout << "\n" << "Enter the departure time: ";
    std::cin >> b[n].departure_time;
    std::cout << "\n" << "Enter the arrival time: ";
    std::cin >> b[n].arrival_time;
    return b;
}
void elem_search(bus *a ,int n){
    std::string num;
    std::cout<<"\n"<<"Enter the number of bus that you need";
    std::cin>>num;
    for(int i = 0;i < n;++i){
        if(a[i].number == num){
            std::cout << "Bus Number: " << a[i].number << "\t" << "The bus type: " << a[i].bus_type << "\t"
                      << "Departure time: " << a[i].departure_time << "\t" << "Arrival time: " << a[i].arrival_time
                      << "\n";
        }
    }
}
void print_all(bus* a, int n){
    for(int i = 0;i < n;++i){
        std::cout << "Bus Number: " << a[i].number << "\t" << "The bus type: " << a[i].bus_type << "\t"
                  << "Departure time: " << a[i].departure_time << "\t" << "Arrival time: " << a[i].arrival_time
                  << "\n";
    }
}
bus* del_element(bus* a,int n,int index){
    index--;
    if(index >= 0 && index < n) {
        for (int i = index; i < n - 1; ++i) {
            a[i] = a[i + 1];
        }
    }
    else std::cout<<"Error,wrong input"<<"\n";
    return a;
}
bus* change_elem(bus *a, int n, int index) {
    index--;
    if(index >= 0 && index < n) {
        std::cout << "\n" << "Enter the number of bus: ";
        std::cin >> a[index].number;
        std::cout << "\n" << "Enter the bus type: ";
        std::cin >> a[index].bus_type;
        std::cout << "\n" << "Enter the arrival placement: ";
        std::cin >> a[index].arrival_placement;
        std::cout << "\n" << "Enter the departure time: ";
        std::cin >> a[index].departure_time;
        std::cout << "\n" << "Enter the arrival time: ";
        std::cin >> a[index].arrival_time;

    }
    else std::cout<<"Error,wrong input"<<"\n";
    return a;
}

