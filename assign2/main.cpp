#include <iostream>
#include <fstream>
#include <cstring>
#include "employee.h"
#include "hours.h"

using namespace std;

int main() {
    char option;
    int num_emps = 3, i_holder = 0;   //false then turns true when user inputs correctly, holds number of employees, holds index, checks for valid ID
    employee* emp_arr = create_employees(num_emps);    //variable to hold in dynamic array

    ifstream read_emp_f, read_menu_f, read_rest_f; //read file opjects
    ofstream write_emp_f, write_menu_f, write_rest_f;   //write file objects

    read_emp_f.open("employee.txt");
    
    read_menu_f.open("menu.txt");

    do {
        cout << "\nWelcome to Bytes Pizza!" << endl;
        cout << "Are you a customer (C) or employee (E) or would you like to quit (Q)? ";
        cin >> option;
        cin.get();  //takes the '\n' enter sign

        if(option == 'C' || option == 'c') {    //customer option
            cout << "Hello customer" << endl;
        }

        if(option == 'E' || option == 'e') {    //employee option
            option_e_id(option, emp_arr, read_emp_f, num_emps, i_holder);
            option_e_pass(emp_arr, i_holder);

            int selection;
            cout << "\nWelcome " << emp_arr[i_holder].first_name << " " << emp_arr[i_holder].last_name << "! ";
            do{
               cout << "What would you like to do? " << endl;
               cout << "1. Change hours" << endl;
               cout << "2. Views Orders" << endl;
               cout << "3. Remove Order" << endl;
               cout << "4. Add Item to Menu" << endl;
               cout << "5. Remove Item from Menu" << endl;
               cout << "6. View Menu" << endl;
               cout << "7. View Hours" << endl;
               cout << "8. View Address" << endl;
               cout << "9. View Phone" << endl;
               cout << "10. Log out" << endl;

               cout << "Selection: ";
               cin >> selection;

               switch(selection) {
                    case 1:
                        /*read_rest_f.open("restaurant_info.txt");
                        write_rest_f.open("out_restaurant_info.txt");
                        assign_days_hrs(read_rest_f);
                        updated_hrs(write_rest_f);
                        read_rest_f.close();
                        write_rest_f.close();*/
                        cout << "changed hours" << endl;
                        break;
                    case 2:
                        cout << "viewed orders" << endl;
                        break;
                    case 3:
                        cout << "removed order" << endl;
                        break;
                    case 4:
                        cout << "added item to menu" << endl;
                        break;
                    case 5:
                        cout << "removed item from menu" << endl;
                        break;
                    case 6:
                        cout << "viewed menu" << endl;
                        break;
                    case 7:
                        cout << "viewed hours" << endl;
                        break;
                    case 8:
                        cout << "viewed address" << endl;
                        break;
                    case 9:
                        cout << "viewed phone" << endl;
                        break;
                    default:
                        ;
               }
            }while(selection != 10);
        }

    } while(option != 'Q' && option != 'q');

    cout << "Bye bye" << endl;

    read_emp_f.close();

    read_menu_f.close();

    return 0;
}