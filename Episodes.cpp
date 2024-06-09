
#include "Episodes.h"

    // Constructor Default
    Episodes::Episodes(){
        serieName = "Default Serie Name";
        season = 0;
        episodeNumber = 0;
    }

    // Parameter Constructor
    Episodes::Episodes(string _serieName, int _season, int _episodeNumber){
        serieName = _serieName;
        season = _season;
        episodeNumber = _episodeNumber;
    }

    // Destructor
    Episodes::~Episodes(){
        cout << "Object Destroyed" << endl;
    }

    // GETS
    string Episodes::getSerieName(){
        return serieName;
    }

    int Episodes::getSeason(){
        return season;
    }

    int Episodes::getEpisodeNumber(){
        return episodeNumber;
    }

    // SETS
    void Episodes::setSerieName(string _serieName){
        serieName = _serieName;
    }

    void Episodes::setSeason(int _season){
        season = _season;
    }

    void Episodes::setEpisodeNumber(int _episodeNumber){
        episodeNumber = _episodeNumber;
    }

    // Other Methods
    string Episodes::str(){
        return "Serie Name: " + serieName + "\nSeason: " + to_string(season) + "\nEpisode Number: " + to_string(episodeNumber);
    }