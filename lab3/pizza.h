#ifndef PIZZA_H
#define PIZZA_H
#include <string>
using namespace std;


class pizza 
{
	private:
		string name;
		int small_cost;
		int med_cost;
		int lg_cost;
		int num_ingredients;
		string* ingredients;
	public:
		pizza(); 
		
		void set_name(string);
		string get_name();
		
		void set_small_cost(int);
		int  get_small_cost();
		
		void set_med_cost(int);
		int  get_med_cost();	
		
		void set_large_cost(int);
		int  get_large_cost();
		
		void set_num_ingredients(int);
		int  get_num_ingredients();
		
		void set_from_file();
		
		string* get_ingredients;
		void set_ingredients(string* in); 		

};
#endif
