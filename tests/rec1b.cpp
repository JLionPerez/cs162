#include <iostream>

using namespace std;

int dyn_arr(int r, int c);

int main() {

    int rows, cols;

    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> cols;

    cout << "The address is: " << dyn_arr(rows, cols) << endl;

    return 0;
}

int dyn_arr(int r, int c) {

    int** arr = new int*[r];

    for(int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }

    return 
}