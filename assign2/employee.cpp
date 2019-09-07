#include <iostream>
#include <fstream>
#include <cstring>
#include "employee.h"

employee* create_employees() {
    int counter;
    ifstream read_emp;
    read_emp.open("employee.txt");
    read_emp >> counter;
    employee* emp = new employee[counter];
    return emp;
}

void assign_emp_file_members(employee* emp, ifstream& file) {    //takes in employee array and employee file
    int i = 0;
    while(!file.eof()) {
        file >> emp[i].id >> emp[i].first_name >> emp[i].last_name >> emp[i].password;   //uses indexes to pass values into these members
        i++;
    }
}

void option_e_id(char option, employee* emp_arr, ifstream& read_emp_f, int num_emps, int& i_holder) {
    string user_id_num;
    int checked;
    assign_emp_file_members(emp_arr, read_emp_f);    //assigns to employee members beforehand
    do {                                                //checks for id
        cout << "\nPlease provide your ID number: ";
        getline(cin, user_id_num);
        checked = check_id(num_emps, user_id_num, emp_arr, i_holder);     //returns neg as 0 when checked
        if(checked == -1) {
            cout << "We do not recognize your ID number. Please try again." << endl;
        }
    } while(checked == -1);
}

int check_id(int num_emps, string user_id_num, employee* emp_arr, int& i_holder) {
    for(int i = 0; i < num_emps; i++) { //for each employee check
        if(user_id_num == emp_arr[i].id) {  //if input is the same as ID in file
            i_holder = i;               //changes reference value to current index
            return 0;
        }
    }
    return -1;
}

void option_e_pass(employee* emp_arr, int& i_holder) {
    string user_password;
    int neg = -1;
    do {                                                //checks for matching password
        cout << "\nPlease provide your password: ";
        getline(cin, user_password);
        if(user_password == emp_arr[i_holder].password) {
            neg = 0;
        }
        if(neg == -1) {
            cout << "We do not recognize your password. Please try again." << endl;
        }
    } while(neg == -1);
}