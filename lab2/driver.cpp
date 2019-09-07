#include <iostream>
#include <string>
#include <fstream>
#include "student_db.h"

int main() {

    fstream f;
    f.open("input.txt");

   string wordFile;

   while(getline(f, wordFile)) {
       cout << wordFile << endl;

       if(f.eof()) {
           break;
        }
   }
    //student** obj;
    //get_student_db_info(obj, 7, f);

    f.close();

    //delete_student_db_info(obj, 7);

    return 0;
}