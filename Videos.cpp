
#include "Videos.h"

    // Constructor Default
    Videos::Videos(){
        type = "Default Type";
        ID = 0;
        name = "Default Name";
        duration = 0;
        genre = "Default Genre";
        score = 0.0;
    }

    // Constructor con parámetros
   Videos::Videos(string _type, int _ID, string _name, int _duration, string _genre, double _score){
        type = _type;
        ID = _ID;
        name = _name;
        duration = _duration;
        genre = _genre;
        score = _score;
   }

    // Destructor
    Videos::~Videos(){
        cout << "Object Destroyed" << endl;
    }

    // GETS
    string Videos::getType(){
        return type;
    }

    int Videos::getID(){
        return ID;
    }

    string Videos::getName(){
    return name;
    }

    int Videos::getDuration(){
        return duration;
    }

    string Videos::getGenre(){
        return genre;
    }

    double Videos::getScore(){
        return score;
    }

    // SETS
    void Videos::setType(string _type){
        type = _type;
    }

    void Videos::setID(int _ID){
        ID = _ID;
    }

    void Videos::setName(string _name){
        name = _name;
    }

    void Videos::setDuration(int _duration){
        duration = _duration;
    }

    void Videos::setGenre(string _genre){
        genre = _genre;
    }

    void Videos::setScore(int _score){
        score = _score;
    }

    // Other Methods
    string Videos::str(){
        return type + ',' + to_string(ID) + ',' + name + ',' + to_string(duration) + ',' + genre + ',' + to_string(score);
    }