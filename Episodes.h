#pragma once

#include "Videos.h"

#include <iostream>

using namespace std;

class Episodes : public Videos{
    // Private
private:
    string serieName;
    int season;
    int episodeNumber;

    // Public
public:
    // Constructor Default
    Episodes();

    // Parameter Constructor
    Episodes(string type, int ID, string _name, int _duration, string _genre, double _score, string _serie_name, int _season, int _episode_number);

    // Destructor
    ~Episodes();

    // GETS
    string getSerieName();
    int getSeason();
    int getEpisodeNumber();

    // SETS
    void setSerieName(string _serieName);
    void setSeason(int _season);
    void setEpisodeNumber(int _episodeNumber);

    // Other Methods
    void str();

};