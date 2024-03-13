#include "library_task1.h"
#include "iostream"
#include <string>
int main(){
    int n , y , x, index, change;
    std::string place;
    std::cout<<"Enter the number of planes:"<<"\n";
    std::cin>>n;
    std::cout<<"Enter the place of arrival:";
    std::cin>>place;
    plane *a = arr_maker (n);
    label:
    std::cout<<"\n"<<"If you want to see all information about the airplanes, enter 1."<<"\n"
                     "If you want to add an element, enter 2."<<"\n"
                     "If you want to find an airplane by its number, enter 3."<<"\n"
                     <<"If u want to delete an element,enter 4."<<"\n"
                     <<"If u want to change an element,enter 5."<<"\n"
                     "If you want to find the plane that you need, enter 6."<<"\n";
    std::cin>>x;
    switch (x) {
        case 1:
            print_all(a, n);
            std::cout<<"\n"<<"If you want to go back to menu enter 1,if you want to find the plane that you need enter 0"<<"\n";
            std::cin>>y;
            if(y >= 1) goto label;
            else break;
        case 2:
            a = add_elem(a,n);
            n++;
            std::cout<<"\n"<<"If you want to go back to menu enter 1,if you want to find the plane that you need enter 0"<<"\n";
            std::cin>>y;
            if(y >= 1) goto label;
            else break;
        case 3:
            elem_search(a,n);
            std::cout<<"\n"<<"If you want to go back to menu enter 1,if you want to find the plane that you need enter 0"<<"\n";
            std::cin>>y;
            if(y >= 1) goto label;
            else break;
        case 4:
            std::cout<<"Enter the number of plane that u want to delete:"<<"\n";
            std::cin>>index;
            a = del_element(a, n, index);
            --n;
            std::cout<<"\n"<<"If you want to go back to menu enter 1,if you want to find the plane that you need enter 0"<<"\n";
            std::cin>>y;
            if(y >= 1) goto label;
            else break;
        case 5:
            std::cout<<"Enter the number of plane that u want to change:"<<"\n";
            std::cin>>change;
            a = change_elem( a, n, change);;
            std::cout<<"\n"<<"If you want to go back to menu enter 1,if you want to find the plane that you need enter 0"<<"\n";
            std::cin>>y;
            if(y >= 1) goto label;
            else break;
        default:
            break;
    }
    quickSort(a,0,n - 1);
    print_arr(a, n, place);

    deletePlaneArray(a, n);
    return 0;
}