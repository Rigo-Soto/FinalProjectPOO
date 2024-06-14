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

    // Constructor with parameters
    Videos(string _type, int _ID, string _name, int _duration, string _genre, double _score);

    // Destructor
    ~Videos();

    // GETS
    virtual string getType();
    virtual int getID();
    virtual string getName();
    virtual int getDuration();
    virtual string getGenre();
    virtual double getScore();

    // SETS
    virtual void setType(string _type);
    virtual void setID(int _ID);
    virtual void setName(string _name);
    virtual void setDuration(int _duration);
    virtual void setGenre(string _genre);
    virtual void setScore(int _score);

    // Other Methods
    virtual void str() = 0;
};