#include "pizza.h"

/*string get_ingredients() {
    return * ingredients;
}

string set_ingredients(string* ing){
    *ingredients = ing;
}*/

string Pizza::set_name(string n) {
    name = n;
}

string Pizza::get_name() {
    return name;
}

Pizza::Pizza() {}

Pizza::Pizza(int n, string* ing) {      //overloaded constructor
    num_ingredients = n;
    ingredients = new string[num_ingredients];
    copy(ing, ing + n, ingredients);
}

Pizza::Pizza(const Pizza &p) {      //copy constructor
    num_ingredients = p.num_ingredients;
    ingredients = new string[p.num_ingredients];
    copy(p.ingredients, p.ingredients + num_ingredients, ingredients);
}

Pizza& Pizza::operator =(const Pizza &p) {      //assignment constructor
    if(&p != this) {
        num_ingredients = p.num_ingredients;
        ingredients = new string[p.num_ingredients];
        copy(p.ingredients, p.ingredients + num_ingredients, ingredients);
    }
    return *this;
}

Pizza::~Pizza() {   //pizza destructor
    delete [] ingredients;
    ingredients = NULL;
}