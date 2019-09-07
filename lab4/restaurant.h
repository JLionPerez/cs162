#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <algorithm>
#include <iostream>
#include <cstring>
#include "menu.h"
#include "structs.h"

using namespace std;

class Restaurant {
    private:
        Menu menu;
        employee* employees;
        int weeks;  //not included
        hours* week;
        string name;    //name of restaurant
        string phone;
        string address;

    public:
        ~Restaurant();
        Restaurant();
        Restaurant(int nw, hours* w);
        Restaurant(const Restaurant &r);
        Restaurant & operator=(const Restaurant &r);
};

#endif