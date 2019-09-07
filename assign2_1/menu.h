#ifndef MENU_H
#define MENU_H
#include "pizza.h"
#include <iostream>

using namespace std;

class Menu {
    private:
        int num_pizzas;
        Pizza* pizzas;

    public:
        //need to include accessor functions and mutator functions for each private member
        int get_num_pizzas();
        void set_num_pizzas(int num);
        Pizza* get_pizzas();
        void set_pizzas(int size);

        //need to include constructors, copy constructors, assignment operator overload,
        //and destructors where appropriate
        Menu();
        Menu(int num_pizz);
        Menu(const Menu& copy);
        Menu& operator=(const Menu& copy);
        ~Menu();

        Menu search_pizza_by_cost(int upper_bound, string size);
        Menu search_pizza_by_ingredients_to_include(string* ingredients, int num_ingredients);
        Menu search_pizza_by_ingredients_to_exclude(string* ingredients, int num_ingredients);
        void add_to_menu(Pizza pizza_to_add);
        void remove_from_menu(int index_of_pizza_on_menu);
};
#endif //menu_h