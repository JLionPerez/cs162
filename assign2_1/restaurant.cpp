#include "restaurant.h"

Menu Restaurant::get_menu() {
    return menu;
}

void Restaurant::set_menu(Menu m) {
    menu = m;
}

employee* Restaurant::get_employees() {
    return employees;
}

void Restaurant::set_employees(int size) {
    employees = new employee[size];
}

hours* Restaurant::get_week() {
    return week;
}

void Restaurant::set_week(int size) {
    week = new hours[size];
}

string Restaurant::get_name() {
    return name;
}

void Restaurant::set_name(string n) {
    name = n;
}

string Restaurant::get_phone() {
    return phone;
}

void Restaurant::set_phone(string p) {
    phone = p;
}

string Restaurant::get_address() {
    return address;
}

void Restaurant::set_address(string a) {
    address = a;
}

void Restaurant::load_data() { //reads from files to correctly populate menu, employees, hours, etc.
    string pizz_name;
    Menu obj;
    Pizza* list;
    int num_pizzs, pizz_s, pizz_m, pizz_l, num_ings;
    ifstream file;
    file.open("menu.txt");
    file >> num_pizzs;
    obj.set_num_pizzas(num_pizzs);
    obj.set_pizzas(num_pizzs);
    list = obj.get_pizzas();
    for(int i = 0; i < num_pizzs; i++) {
        file >> pizz_name >> pizz_s >> pizz_m >> pizz_l >> num_ings;
        list[i].set_name(pizz_name);
        list[i].set_small_cost(pizz_s);
        list[i].set_medium_cost(pizz_m);
        list[i].set_large_cost(pizz_l);
        list[i].set_num_ingredients(num_ings);
        list[i].set_ingredients(num_ings);
        cout << list[i].get_name() << " " << list[i].get_small_cost() << " " << list[i].get_medium_cost() << " " << list[i].get_large_cost() << " " << list[i].get_num_ingredients() << endl;
        for(int i = 0; i < num_ings; i++) {
            
        }
    }
    file.close();
    //cout << obj.get_num_pizzas() << endl;
}

bool Restaurant::login(string id, string password) {
    /*ifstream file;
    file.open("employee.txt");
    file >> num_emps;
    for(int i = 0; i < num_emps; i++) {     //assigns variables, can be skipped if employee is read beforehand
        file >> emp[i].id >> emp[i].first_name >> emp[i].last_name >> emp[i].password << endl;
        if(id == emp[i].id) {
            if(password == emp[i].password){
                return true;
            }
        }
    }
    file.close();
    return false;*/
}

void Restaurant::view_menu() {

}

void Restaurant::view_hours() {

}

void Restaurant::view_address() {

}

void Restaurant::view_phone() {

}

void Restaurant::search_menu_by_price() {

}

void Restaurant::search_by_ingredients() {

}

void Restaurant::place_order(Pizza* selection) {

}

void Restaurant::change_hours() {

}

void Restaurant::add_to_menu() {

}

void Restaurant::remove_from_menu() {

}

void Restaurant::view_orders() {

}

void Restaurant::remove_orders() {

}

Restaurant::Restaurant() {}

Restaurant::Restaurant(const Restaurant& copy) {
    menu = copy.menu;
    employees = new employee[3];
    week = new hours[7];
    for(int i = 0; i < 3; i++) {
        employees[i] = copy.employees[i];
    }
    for(int i = 0; i < 7; i++) {
        week[i] = copy.week[i];
    }
    cout << "copied" << endl;
}

Restaurant& Restaurant::operator=(const Restaurant& copy) {
    if(&copy != this) {
        menu = copy.menu;
        employees = new employee[3];
        week = new hours[7];
        delete [] employees;
        delete [] week;
        for(int i = 0; i < 3; i++) {
            employees[i] = copy.employees[i];
        }
        for(int i = 0; i < 7; i++) {
            week[i] = copy.week[i];
        }
    }
    cout <<"AOO" << endl;
    return *this;
}

Restaurant::~Restaurant() {
    delete [] employees;
    delete [] week;
    employees = NULL;
    week = NULL;
}