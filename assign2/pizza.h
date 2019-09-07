#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <cstring>

using namespace std;

class Pizza {
    private:
        string name;
        int small_cost;
        int medium_cost;
        int large_cost;
        int num_ingredients;
        string* ingredients;

    public:
        void get_name();
        string set_name(string n);

        void get_small_cost();
        int set_small_cost(int sc);

        void get_medium_cost();
        int set_medium_cost(int mc);

        void get_large_cost();
        int set_large_cost(int lc);

        void get_num_ingredients();
        int set_num_ingredients(int ni);

        void get_ingredients();
        string* set_ingredients(string* i);

        ~Pizza();
        Pizza();
        Pizza(int n, string* ing);
        Pizza(const Pizza &p);
        Pizza & operator=(const Pizza &p);
};

#endif //pizza_h