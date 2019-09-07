#include <iostream>
#include <cstdlib>							//for atoi
#include <cstring>

using namespace std;

struct mult_div_values {
	int mult;
	float div;
};

bool is_valid_dimensions(char* m, char* n);
mult_div_values** create_table(int m, int n);
void set_mult_values(mult_div_values** table, int m, int n);
void set_div_values(mult_div_values** table, int m, int n);
void delete_table(mult_div_values** table, int m);

//void cin_getline(char* s, const int size);

int main(int argc, char* argv[]) {
	
	if(argc == 3) {							//if there are 3 args (./program value1 value 2) then proceed
	
		is_valid_dimensions(argv[1], argv[2]);
		
		
	}
	
	else {									//else display error for args
		cout << "\nNot enough or too many arguments, please enter only two valid integers." << endl;
	}

	cout << "\nRows = " << argv[1] << endl;	//just to make sure rows and cols have the right values
	cout << "Cols = " << argv[2] << endl;
	
	return 0;
}

bool is_valid_dimensions(char* m, char* n) {
	
	int rows, cols;
	
	rows = atoi(m);		//sets rows to first value
	cols = atoi(n);		//sets cols to second value
	
	if (rows != 0) {
		if (cols != 0) {
			cout << "if rows and cols are valid returns true" << endl;
			return true;
		}
			
		while(!(*n >= '1' && *n <= '9')) {	//while columns is invalid ask for a valid input
			cout << "You did not input a valid column." << endl;
			cout << "Please enter an integer greater than 0 for a column: ";
			cin >> n;
		}
		
		cout << "While cols loop, now valid returns true" << endl;
		return true;
		
	}
	
	while(!(*m >= '1' && *m <= '9')) {	//while rows is invalid ask for a valid input
		cout << "You did not input a valid row." << endl;
		cout << "Please enter an integer greater than 0 for a row: ";
		cin >> m;
	}
	
	cout << "While rows loop, now valid returns true" << endl;
	return true;
	
}

void delete_table(mult_div_values** table, int m) {
	
	
}

void set_div_values(mult_div_values** table, int m, int n) {
	
}

void set_mult_values(mult_div_values** table, int m, int n) {
	
	
}

mult_div_values** create_table(int m, int n) {
	
	
}
