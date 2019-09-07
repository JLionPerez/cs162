/*************************
 * Program Filename: netflix.h
 * Author: Joelle Perez
 * Date: 6 October 2018
 * Description: This file holds declarations for functions.
 * Input: none
 * Output: none
 * **********************/
#ifndef NETFLIX_H   //file guards, prevents reduntancy
#define NETFLIX_H

using namespace std;

struct movie{
    string title;   //movie title
    int num_actors; //number of actors in the film
    string* actors; //array of actors
    float rating;   
    bool suggested; //true/false of whether this movie was suggested for you
};

struct genre{
    string genre;   //name of genre
    movie* m;       //array of movie structs
    int num_movies; //number of movies in this category
};

genre* create_genres(int n);
void get_genre_data(genre* g, int n, ifstream& file);
movie* create_movies(int n);
void get_movie_data(movie* m, int n, ifstream& file);
void delete_info(genre** g, int);

#endif  //NETFLIX_H
