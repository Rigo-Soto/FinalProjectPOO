#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

    class Movie{

    // Private
private:
    string movieName;
    int movieRating;
    
    // Public
public:
    // Constructor Default
    Movie();

    // Constructor con parámetros
    Movie(string _movieName, int _movieRating);

    // Destructor
    ~Movie();

    // Other Methods
    string str();
    };