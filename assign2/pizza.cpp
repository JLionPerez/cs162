#include "pizza.h"

Pizza::Pizza() {}

Pizza::Pizza(int n, string* ing) {
    num_ingredients = n;
    ingredients = new string[num_ingredients];
    copy(ing, ing + n, ingredients);
    cout << "Pizza overloaded constructor" << endl;
}

Pizza::Pizza(const Pizza &p) {
    num_ingredients = p.num_ingredients;
    ingredients = new string[p.num_ingredients];
    copy(p.ingredients, p.ingredients + num_ingredients, ingredients);
}

Pizza& Pizza::operator =(const Pizza &p) {
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