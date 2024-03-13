
#ifndef LABA7_LIBRARY_STRUCT_H
#define LABA7_LIBRARY_STRUCT_H
#pragma once
struct plane{
    std::string time;
    int number;
    std::string arrival_placement;
    std::string plane_type;
};
struct bus{
    std::string departure_time;
    std::string arrival_time;
    std::string number;
    std::string arrival_placement;
    std::string bus_type;
};

#endif //LABA7_LIBRARY_STRUCT_H
