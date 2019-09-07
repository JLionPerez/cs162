#include "pizza.h"

string Pizza::get_name() {
    return name;
}

void Pizza::set_name(string n){
    name = n;
}

int Pizza::get_small_cost() {
    return small_cost;
}

void Pizza::set_small_cost(int cost) {
    small_cost = cost;
}

int Pizza::get_medium_cost() {
    return medium_cost;
}

void Pizza::set_medium_cost(int cost) {
    medium_cost = cost;
}

int Pizza::get_large_cost() {
    return large_cost;
}

void Pizza::set_large_cost(int cost) {
    large_cost = cost;
}

int Pizza::get_num_ingredients() {
    return num_ingredients;
}

void Pizza::set_num_ingredients(int num) {
    num_ingredients = num;
}

string* Pizza::get_ingredients() {
    return ingredients;
}

void Pizza::set_ingredients(int size) {
    ingredients = new string[size];
}

Pizza::Pizza() {}   //default constructor

Pizza::Pizza(string n, int s_cost, int m_cost, int l_cost, int num) { //overloaded constructor
    set_name(n);
    set_small_cost(s_cost);
    set_medium_cost(m_cost);
    set_large_cost(l_cost);
    set_num_ingredients(num);
    set_ingredients(num);
}

Pizza::Pizza(const Pizza& copy) {   //copy constructor
    name = copy.name;
    num_ingredients = copy.num_ingredients;
    ingredients = new string[num_ingredients];
    for(int i = 0; i < num_ingredients; i++) {
        ingredients[i] = copy.ingredients[i];
    }
    cout << "copied" << endl;
}

Pizza& Pizza::operator=(const Pizza& copy) {    //assignment operator overloaded
    if(&copy != this) {
        name = copy.name;
        num_ingredients = copy.num_ingredients;
        ingredients = new string[num_ingredients];
        //std::copy(copy.ingredients, copy.ingredients + num_ingredients, ingredients);
        //delete [] ingredients;
        if(&copy != NULL) {  //delete [] ingredients;
            for(int i = 0; i < num_ingredients; i++) {
                ingredients[i] = copy.ingredients[i];
            }
        }
    }
    cout <<"AOO" << endl;
    return *this;
}

Pizza::~Pizza() {
    delete [] ingredients;
    ingredients = NULL;
}