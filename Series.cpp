
#include "Series.h"

    // Constructor Default
    Series::Series(){
        serieName = "Default Serie Name";
        episodes = {};
    }

    // Parameter Constructor
    Series::Series(string _serieName, array<Episodes, 10> _episodes){
        serieName = _serieName;
        episodes = _episodes;
    }

    // Destructor
    Series::~Series(){
        cout << "Object Destroyed" << endl;
    }

    // GETS
    string Series::getSerieName(){
        return serieName;
    }

    // SETS
    void Series::setSerieName(string _serieName){
        serieName = _serieName;
    }


    // Other Methods
    string Series::str(){
        return "Serie Name: " + serieName + "\nEpisodes: " + to_string(episodes.size());
    }