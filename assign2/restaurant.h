#ifndef RESTAURANT_H
#define RESTAURANT_H
//#include <iostream>
#include <fstream>
#include "menu.h"
#include "employee.h"
#include "hours.h"

#include <cstring>

using namespace std;

class Restaurant {

    private: 
        Menu menu;
        employee* employees;
        hours* week;
        int weeks;  //not supposed to exist
        string name;    //name of restaurant
        string phone;
        string address;

    public:
        void load_data();
        bool login(string id, string password);

        employee* get_employees();

        string get_name();  //gets name of restaurant
        void set_name(string n);    //sets name of restaurant
        void view_name();   //displays name of restaurant

        void view_menu();
        void view_hours();
        void view_address();
        void view_phone();

        void search_menu_by_price();
        void search_by_ingredients();

        void place_order(Pizza* selection);
        void change_hours();
        void add_to_menu();
        void remove_from_menu();
        
        void view_orders();
        void remove_orders();

        ~Restaurant();
        Restaurant();
        Restaurant(int nw, hours* w);
        Restaurant(const Restaurant &r);
        Restaurant & operator=(const Restaurant &r);
};

#endif //restaurant_h