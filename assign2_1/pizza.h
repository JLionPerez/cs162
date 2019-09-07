#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <cstring>

using namespace std;

class Pizza {
    private:
        string name;
        int small_cost;
        int medium_cost;
        int large_cost;
        int num_ingredients;
        string* ingredients;
        
    public:
        //need to include accessor functions and mutator functions for each private member 
        string get_name();
        void set_name(string n);
        int get_small_cost();
        void set_small_cost(int cost);
        int get_medium_cost();
        void set_medium_cost(int cost);
        int get_large_cost();
        void set_large_cost(int cost);
        int get_num_ingredients();
        void set_num_ingredients(int num);
        string* get_ingredients();
        void set_ingredients(int size);

        //need to include constructors, copy constructors, assignment operator overload,
        //and destructors where appropriate
        Pizza();
        Pizza(string n, int s_cost, int m_cost, int l_cost, int num);
        Pizza(const Pizza& copy);
        Pizza& operator=(const Pizza& copy);
        ~Pizza();

};
#endif //pizza_h