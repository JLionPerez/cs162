#include "menu.h"

Menu::Menu() {}

Menu::Menu(int n, Pizza* p) {
    num_pizzas = n;
    pizzas = new Pizza[num_pizzas];
    copy(p, p + n, pizzas);
}

Menu::Menu(const Menu &m) {
    num_pizzas = m.num_pizzas;
    pizzas = new Pizza[m.num_pizzas];
    copy(m.pizzas, m.pizzas + num_pizzas, pizzas);
}

Menu& Menu::operator =(const Menu &m) {
    if(&m != this) {
        num_pizzas = m.num_pizzas;
        pizzas = new Pizza[m.num_pizzas];
        copy(m.pizzas, m.pizzas + num_pizzas, pizzas);
    }
    return *this;
}

Menu::~Menu() {     //menu destructor
    delete pizzas;
    pizzas = NULL;
}