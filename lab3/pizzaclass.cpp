#include <iostream>
#include "pizza.h"
#include "pizzaclass.h"

using namespace std;

Menu::Menu(){
pizza_num=0;
pizzas = new pizza[];
}

void Menu::add(pizza add_pizza){
  pizzas[pizza_num+1] =add_pizza;
  pizza_num++;


}