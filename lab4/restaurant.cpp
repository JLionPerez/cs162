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
