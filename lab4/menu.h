#ifndef MENU_H
#define MENU_H
#include <algorithm>
#include <iostream>
#include "pizza.h"

class Menu {
    private:
        int pizza_num;
        Pizza* pizzas;

    public:
        ~Menu();
        Menu();
        Menu(int n, Pizza* p);
        Menu(const Menu &m);
        Menu & operator=(const Menu &m);
};

#endif