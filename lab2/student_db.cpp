#include <iostream>
#include <string>
#include <fstream>
#include "student_db.h"

student* create_student_db(int n) {
    student* students = new student[n];
}

void get_student_db_info(student* s, int n, fstream& file) {
    for (int i = 0; i < n; i++) {
        file >> s->idNum >> s->fname >> s->lname >> s->major; 
    }
}


void delete_student_db_info(student** s, int n) {
    for (int i = 0; i < n; i++) {
        delete [] s;
    }

}