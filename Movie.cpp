
#include "Movie.h"
#include "Videos.h"

    // Constructor Default
    Movie::Movie(){
        movieName = "Default Name";
        movieRating = 0;
    }
 
    // Parameter Constructor
    Movie::Movie (string _type, int _ID, string _movieName, int _duration, string _genre, double _movieRating):Videos(_type,_ID,_movieName,_duration,_genre,_movieRating){
        movieName = _movieName;
        movieRating = _movieRating;
    }

    // Destructor
    Movie::~Movie(){
        cout << "Object Destroyed" << endl;
    }

    // Other Methods
    void Movie::str(){
        cout << "Im a Movie" << endl;
    }
