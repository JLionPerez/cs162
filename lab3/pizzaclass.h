#ifndef MENU_H
#define MENU_H

class Menu {
private:
   int pizza_num;
   pizza* pizzas;
public:
  Menu();
  Menu sort_small_by_cost(int upper_bound, string size):
  Menu sort_incl_ingred(string* ingredients, int num_ingredients);
  Menu sort_exclud_ingred(string* ingredients, int num_ingredients);
  void add(pizza add_pizza);
};

#endif