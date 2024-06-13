#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Episodes.h"

using namespace std;

class Series : public Episodes{

    // Private
private:
    string serieName;
    vector<Episodes *> episodes;

    // Public
public:
    // Constructor Default
    Series();

    // Parameter Constructor
    Series(string, vector<Episodes *>);

    // Destructor
    ~Series();

    // GETS
    string getSerieName();
    

    // SETS
    void setSerieName(string _serieName);
    void setEpisodes(vector<Episodes *>);


    // Other Methods
    void showEpisodes();
    void str();
    void addEpisode(Episodes *);


};