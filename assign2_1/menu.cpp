#include "menu.h"

int Menu::get_num_pizzas() {
    return num_pizzas;
}

void Menu::set_num_pizzas(int num) {
    num_pizzas = num;
}

Pizza* Menu::get_pizzas() {
    return pizzas;
}

void Menu::set_pizzas(int size) {
    pizzas = new Pizza[size];
}

Menu Menu::search_pizza_by_cost(int upper_bound, string size) {
    /*string small = "small", medium = "medium", large = "large";
    ifstream file;
    file.open("menu.txt");
    for(int i = 0; i < num_pizzs; i++) {
        if(size == small) {
            if(pizza[i].small_cost <= upper_bound){
                cout << pizza[i].name << endl;
            }
        }
        else if(size == medium){
            if(pizza[i].medium_cost <= upper_bound) {
                cout << pizza[i].name << endl;
            }
        }
        else if(size == large){
            if(upper_bound <= pizza[i].large_cost){
                cout << pizza[i].name << endl;
            }
        }
    }
    file.close();*/
}

Menu Menu::search_pizza_by_ingredients_to_include(string* ingredients, int num_ingredients) {
   /* for(int = 0; i < num_ingredients; i++) {
        if(ingredients[i] == ingredients) {
            cout << pizza[i].name << pizza[i].small_cost << pizza[i].medium_cost << pizza[i].large_cost << endl;
        }
    }*/
}

Menu Menu::search_pizza_by_ingredients_to_exclude(string* ingredients, int num_ingredients) {
    /*for(int i = 0; i < num_ingredients; i++) {
        if(ingredients[i] != ingredients) {
            cout << pizz[i].name << pizza[i].small_cost << pizza[i].medium_cost << pizza[i].large_cost << endl;
        }
    }*/
}

void Menu::add_to_menu(Pizza pizza_to_add) {
    
}

void Menu::remove_from_menu(int index_of_pizza_on_menu) {

}

Menu::Menu() {}

Menu::Menu(int num_pizz) {
    set_num_pizzas(num_pizz);
    set_pizzas(num_pizz);
}

Menu::Menu(const Menu& copy) {
    num_pizzas = copy.num_pizzas;
    pizzas = new Pizza[num_pizzas];
    for(int i = 0; i < num_pizzas; i++) {
        pizzas[i] = copy.pizzas[i];
    }
    cout << "copied" << endl;
}

Menu& Menu::operator=(const Menu& copy) {
    if(&copy != this) {
        num_pizzas = copy.num_pizzas;
        pizzas = new Pizza[num_pizzas];
        //std::copy(copy.ingredients, copy.ingredients + num_ingredients, ingredients);
        delete [] pizzas;
        /*if(&copy != NULL) {  //delete [] ingredients;
            for(int i = 0; i < num_pizzas; i++) {
                pizzas[i] = copy.pizzas[i];
            }
        }*/
    }
    cout <<"AOO" << endl;
    return *this;
}

Menu::~Menu() {
    delete [] pizzas;
    pizzas = NULL;
}