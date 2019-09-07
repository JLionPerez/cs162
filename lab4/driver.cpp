#include <iostream>
#include <cstring>
#include "pizza.h"
#include "restaurant.h"
#include "restaurant.h"

int main() {
    string* list;

    Pizza a(3, list);
    Pizza b(a);
    a = b;

    //string n = "Bob";

    //a.set_name(n);

    //cout << "a: " << a.get_name() << endl;
    //cout << "b: " << b.get_name() << endl;

    return 0;
}