/************************
 * Program Filename: run_netflix.cpp
 * Author: Joelle Perez
 * Date: 6 October 2018
 * Description: This program reads in a file then returns the necessary data through another file or on display.
 * Input: text file name
 * Output: Data of movies and whats recommended for the user.
 * *********************/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include "netflix.h"

int main(int argc, char* argv[]) {

    ifstream rf;           //input file
    ofstream wf;           //output file
    rf.open(argv[1]);      //open file

    int num_genre, num_movies, num_actors;
    string genre_name, movie_name, actor_names, text;
    float rating;
    bool suggested;

    if(rf.is_open()) {     //determines if a file is already open or not

        while(!rf.eof()) {      //while the file doesn't end
            rf >> num_genre;
            cout << num_genre << endl;
            create_genres(num_genre);       //creates genres

                for(int i = 0; i < num_genre; i++) {
                    rf >> genre_name >> num_movies;
                    cout << genre_name << num_movies << endl;
                    create_movies(num_movies);      //creates movies

                    for(int i = 0; i < num_movies; i++) {
                        rf >> movie_name >> rating >> num_actors;
                        cout << movie_name << rating << num_actors << endl;

                        for(int i = 0; i < num_actors; i++) {
                            rf >> actor_names;
                            cout << actor_names << endl;
                        }
                    
                        rf >> suggested;
                    }
                }
            break;
        }
    }

    else {
        char fName[64];
        bool user_success = false;
        
        while(!user_success) {
            cout << "Error opening file." << endl;
            cout << "Please input valid file: ";
            cin.getline(fName, 64);
            
        }
    }

    rf.close();             //close read file
    wf.close();             //close written file

    return 0;
}