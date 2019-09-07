 /*************************
 * Program Filename: netflix.cpp
 * Author: Joelle Perez
 * Date: 6 October 2018
 * Description: This file holds the function definitions for functions.
 * Input: None
 * Output: None
 * **********************/
#include <iostream>
#include <fstream>
#include "netflix.h"
using namespace std;

/**************************
 * Function: create_genres(int n)
 * Description: This function creates a new dynamic array of genres.
 * Parameters: integer
 * Pre-Conditions: none
 * Post-Conditions: returns genre array
 * ************************/
genre* create_genres(int n) {
    genre* g = new genre[n];
    return g;
}

/**************************
 * Function: get_genre_data(genre* g, int n, ifstream& file)
 * Description: This function gets the data from the file and inputs them in the struct members.
 * Parameters: pointer genre struct, integer, file stream
 * Pre-Conditions: have a genre
 * Post-Conditions: none
 * ************************/
void get_genre_data(genre* g, int n, ifstream& file) {
    for(int i = 0; i < n; i++) {
        g->m[n];        //dereferences to access list values
    }

    while(file >> g->genre >> g->num_movies) {
        g->genre;       //access genre member
        g->num_movies;  //access num_movies member
    }
}

/**************************
 * Function: create_movies(int n)
 * Description: This function creates a new dynamic array of movies.
 * Parameters: integer
 * Pre-Conditions: none
 * Post-Conditions: returns movie array
 * ************************/
movie* create_movies(int n) {
    movie* m = new movie[n];
    return m;
}

/**************************
 * Function: get_movie_data(movie* m, int n, ifstream& file)
 * Description: This function gets the data from the file and inputs them in the struct members.
 * Parameters: pointer movie struct, integer, file stream
 * Pre-Conditions: have a movie
 * Post-Conditions: none
 * ************************/
void get_movie_data(movie* m, int n, ifstream& file) {
   for(int i = 0; i < n; i++) {
       m->actors[n];
   }
}

/**************************
 * Function: delete_info(genre** g, int n)
 * Description: This function deletes information within the genre struct along with the movie struct.
 * Parameters: double pointer genre struct, integer
 * Pre-Conditions: structs to delete
 * Post-Conditions: none
 * ************************/
void delete_info(genre** g, int n) {
    for(int i = 0; i  < n; i++) {
        delete [] g;
    }
}