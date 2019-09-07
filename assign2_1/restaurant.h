#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "menu.h"
#include "structs.h"
#include <cstring>
#include <fstream>

using namespace std;

class Restaurant {
    private:
        Menu menu;
        employee* employees;
        hours* week;
        string name;
        string phone;
        string address;

    public:
        //need to include accessor functions and mutator functions for each private member
        Menu get_menu();
        void set_menu(Menu m);
        employee* get_employees();
        void set_employees(int size);
        hours* get_week();
        void set_week(int size);
        string get_name();
        void set_name(string n);
        string get_phone();
        void set_phone(string p);
        string get_address();
        void set_address(string a);

        //need to include constructors, copy constructors, assignment operator overload,
        //and destructors where appropriate
        Restaurant();
        Restaurant(const Restaurant& copy);
        Restaurant& operator=(const Restaurant& copy);
        ~Restaurant();

        void load_data(); //reads from files to correctly populate menu, employees, hours, etc.
        bool login(string id, string password);
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
};
#endif //restaurant_h