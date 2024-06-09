
#include "Movie.h"

    // Constructor Default
    Movie::Movie(){
        movieName = "Default Name";
        movieRating = 0;
    }

    // Parameter Constructor
    Movie::Movie(string _movieName, int _movieRating){
        movieName = _movieName;
        movieRating = _movieRating;
    }

    // Destructor
    Movie::~Movie(){
        cout << "Object Destroyed" << endl;
    }

    // Other Methods
    Movie::string str(){
        return "Movie Name: " + movieName + "\nMovie Rating: " + to_string(movieRating);
    }