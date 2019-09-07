#include "menu.h"

Menu::Menu() {}

Menu::Menu(int n, Pizza* p) {
    pizza_num = n;
    pizzas = new Pizza[pizza_num];
    copy(p, p + n, pizzas);
}

Menu::Menu(const Menu &m) {
    pizza_num = m.pizza_num;
    pizzas = new Pizza[m.pizza_num];
    copy(m.pizzas, m.pizzas + pizza_num, pizzas);
}

Menu& Menu::operator =(const Menu &m) {
    if(&m != this) {
        pizza_num = m.pizza_num;
        pizzas = new Pizza[m.pizza_num];
        copy(m.pizzas, m.pizzas + pizza_num, pizzas);
    }
    return *this;
}

Menu::~Menu() {     //menu destructor
    delete pizzas;
    pizzas = NULL;
}