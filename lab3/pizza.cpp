#include <iostream>
#include <string>
#include "pizzaclass.h"
#include "pizza.h"

using namespace std;

pizza::pizza(){
	name = "cheese"; 
	small_cost = 5;
	medium_cost = 7;
	large_cost = 10;
	num_ingredients = 1;	
	ingredients = {"cheese"};
}	
void pizza::set_name(string str_name)		
	name = str_name;
}
string pizza::get_name(){
	return name;
}
		
void pizza::set_small_cost(int costIn){
	small_cost = costIn;
}
int pizza::get_small_cost(){
	return small_cost;
}
		
void pizza::set_med_cost(int costIn){
	medium_cost = costIn;
}
int pizza::get_med_cost(){
	return medium_cost;
}	
		
void pizza::set_large_cost(int costIn){
	large_cost = costIn;
}
int pizza::get_large_cost(){
	return large_cost;
}
		
void pizza::set_num_ingredients(int ingredie){
	num_ingedients= ingredientsIn;
}
int pizza::get_num_ingredients()
		
void pizza::set_from_file()
		
string* pizza::get_ingredients()
void pizza::set_ingredients(string* in) 		
