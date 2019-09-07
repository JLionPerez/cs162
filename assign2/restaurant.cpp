#include "restaurant.h"

Restaurant::Restaurant() {}

Restaurant::Restaurant(int nw, hours* w) {
    weeks = nw;
    week = new hours[weeks];
    copy(w, w + nw, week);
}

Restaurant::Restaurant(const Restaurant &r) {
    weeks = r.weeks;
    week = new hours[r.weeks];
    copy(r.week, r.week + weeks, week);
}

Restaurant& Restaurant::operator =(const Restaurant &r) {
    if(&r != this) {
        weeks = r.weeks;
        week = new hours[r.weeks];
        copy(r.week, r.week + weeks, week);
    }
    return *this;
}

Restaurant::~Restaurant() {   //restaurant destructor
    delete week;
    week = NULL;
}

employee* Restaurant::get_employees() {
    return employees;
}

void load_data(ifstream& file) {
    //int counter = 0;
    string num;

    for (int i = 0; i < /*counter*/; i++) {
        
    }
}

bool login(string id, string password) {
    //while()

    //if(id == )
    
    //return true;
    //return false;
}