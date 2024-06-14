
#include "Episodes.h"
#include "Videos.h"

#include <iostream>

    // Constructor Default
    Episodes::Episodes(){
        serieName = "We didnt find a serie with that name";
        season = 0;
        episodeNumber = 0;
    }

    // Parameter Constructor
    Episodes::Episodes(string type, int ID, string _name, int _duration, string _genre, double _score, string _serie_name, int _season, int _episode_number):Videos(type,ID,_name,_duration,_genre,_score){
        serieName = _serie_name;
        season = _season;
        episodeNumber = _episode_number;
    }

    // Destructor
    Episodes::~Episodes(){
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
    void Episodes::str(){
        cout << "Im an Episode" << endl;
    }