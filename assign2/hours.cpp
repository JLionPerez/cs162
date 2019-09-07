#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include "hours.h"

void assign_days_hrs(ifstream& file) {
    int days_open = 7;
    string skip, user_day, open_time, close_time;
    hours *h;

    for(int i = 0; i < 4; i++) {    //skips first 3 lines
        getline(file, skip);
    }

    cout << days_open << "|" <<endl;
    h = new hours[days_open];

    cout << "\nWhich day would you like to change the hours? ";
    cin >> user_day;
    cout << "\nWhat should the opening time be? ";
    cin >> open_time;
    cout << "\nWhat should the closing time be? ";
    cin >> close_time;

    for(int i = 0; i < days_open; i++) {
        file >> h[i].day >> h[i].open_hour >> h[i].close_hour;

        if(user_day == h[i].day) {
            h[i].open_hour = open_time;
            h[i].close_hour = close_time;
        }
    }
    /*cout << "\nHere are the updated hours: " << endl;
    for(int i = 0; i < days_open; i++) {
        cout << h[i].day << " " << h[i].open_hour << " " << h[i].close_hour << endl;
    }*/
}

/*void updated_hrs(ofstream& o_file) {
    cout << "\nHere are the updated hours: " << endl;
    cout << h[i].day << " " << h[i].open_hour << " " << h[i].close_hour << endl;
}*/