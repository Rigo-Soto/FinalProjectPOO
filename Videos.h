#pragma once

#include <iostream>

using namespace std;

class Videos{
    // Private
private:
    string type;
    int ID;
    string name;
    int duration;
    string genre;
    double score;

    // Public
public:
    // Constructor Default
    Videos();

    // Constructor con parámetros
    Videos(string _type, int _ID, string _name, int _duration, string _genre, double _score);

    // Destructor
    ~Videos();

    // GETS
    string getType();
    int getID();
    string getName();
    int getDuration();
    string getGenre();
    double getScore();

    // SETS
    void setType(string _type);
    void setID(int _ID);
    void setName(string _name);
    void setDuration(int _duration);
    void setGenre(string _genre);
    void setScore(int _score);

    // Other Methods
    virtual void str() = 0;
};