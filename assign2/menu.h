#ifndef MENU_H
#define MENU_H
#include <cstring>
#include "pizza.h"

using namespace std;

class Menu {
    private:
        int num_pizzas;
        Pizza* pizzas;   //list of pizza structs

    public:
        Menu search_pizza_by_cost(int upper_bound, string size);
        Menu search_pizza_by_ingredients_to_include(string* ingredients, int num_ingredients);
        Menu search_pizza_by_ingredients_to_exclude(string* ingredients, int num_ingredients);

        void add_to_menu(Pizza pizza_to_add);
        void remove_from_menu(int index_of_pizza_on_menu);

        ~Menu();
        Menu();
        Menu(int n, Pizza* p);
        Menu(const Menu &m);
        Menu & operator=(const Menu &m);
};

#endif //menu_h