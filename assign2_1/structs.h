#ifndef STRUCTS_H
#define STRUCTS_H
#include <cstring>

using namespace std;

struct employee {
    string id;
    string first_name;
    string last_name;
    string password;
};

struct hours {
    string day;
    string open_hour;
    string close_hour;
};
#endif //structs_h