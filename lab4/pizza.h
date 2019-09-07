#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

class Pizza {
    private: 
        string name;
		int small_cost;
		int med_cost;
		int lg_cost;
		int num_ingredients;
		string* ingredients;

    public: 
        string get_ingredients();
        string set_ingredients(string* ing);
        
        string set_name(string n);
        string get_name();
        ~Pizza();
        Pizza();
        Pizza(int n, string* ing);
        Pizza(const Pizza &p);
        Pizza & operator=(const Pizza &p);
};

#endif