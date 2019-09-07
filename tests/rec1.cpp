#include <iostream>

using namespace std;

int count_a(char* str);

int main() {

    char* string;
    string = new char[64];
    cout << "Type in a word or phrase: ";
    cin.getline(string, 64);

    cout << "Number of 'a's: " << count_a(string) << endl;

    delete [] string;

    return 0;
}

int count_a(char* str) {
    int i = 0, count = 0;

    while(str[i] != '\0') {
        if(str[i] == 'a') {
            count++;
        }
        i++;
    }

    return count;
}