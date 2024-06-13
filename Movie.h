#pragma once

#include <stdio.h>
#include <iostream>
#include <string>

#include "Videos.h"
using namespace std;

    class Movie : public Videos {

    // Private
private:
    string movieName;
    int movieRating;
    
    // Public
public:
    // Constructor Default
    Movie();

    // Constructor con parámetros
    Movie(string _type, int _ID, string _name, int _duration, string _genre, double _score);

    // Destructor
    ~Movie();

    // Other Methods
    void str();

};