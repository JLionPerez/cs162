#include <string>

using namespace std;

struct student{
    int idNum;
    char* fname;
    char* lname;
    char* major;
    char* students[];
};

student* create_student_db(int n);
void get_student_db_info(student* s, int n, fstream& file);
void delete_student_db_info(student** s, int n);