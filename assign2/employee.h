#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <cstring>
using namespace std;

struct employee {
    string id;
    string first_name;
    string last_name;
    string password;
};

employee* create_employees(int n);   //creates a list of employees
void assign_emp_file_members(employee* emp, ifstream& file);

void option_e_id(char option, employee* emp_arr, ifstream& read_emp_f, int num_emps, int& i_holder);   //do while loop
int check_id(int num_emps, string user_id_num, employee* emp_arr, int& i_holder);  //gets called inside option_e_id
void option_e_pass(employee* emp_arr, int& i_holder);

#endif //employee_h