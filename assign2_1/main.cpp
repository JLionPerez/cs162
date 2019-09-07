#include <iostream>
#include <fstream>
#include "structs.h"
#include "pizza.h"
#include "menu.h"
#include "restaurant.h"

int main() {

    Pizza a("Pepper", 12, 16, 20, 5);  //set
    //a.set_name("Cheese");
    //Pizza b(a); //copies a into b
    //cout << b.get_name() << endl;
    //cout << b.get_ingredients() << endl;
    
    //Pizza a, b;   //aoo works
    //a.set_name("Pepper");
    //b.set_name("Cheese");
    Pizza b("Cheese", 13, 17, 21, 6);
    cout << a.get_name() << endl;
    a = b;
    cout << a.get_name() << endl;
    cout << b.get_name() << endl;

    Menu a(1);  //set
    Menu b(2);
    a = b;

    Restaurant a;
    Restaurant b;
    a = b;

    //Restaurant lol;
    //lol.load_data();

    /*Restaurant lol;
    lol.load_data();*/

    return 0;
}