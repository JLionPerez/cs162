#ifndef HOURS_H
#define HOURS_H
#include <cstring>
using namespace std;

struct hours {
    string day;
    string open_hour;
    string close_hour;
};

void assign_days_hrs(ifstream& file);
void updated_hrs(ofstream& o_file);
#endif //hours_h