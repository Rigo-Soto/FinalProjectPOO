
#include "Series.h"

    // Constructor Default
    Series::Series(){
        serieName = "We didnt find a serie with that name";
        episodes = {};
    }

    // Parameter Constructor
    Series::Series(string _serieName, vector<Episodes *> _episodes){
    serieName=_serieName;
    episodes=_episodes;
}

    // Destructor
    Series::~Series(){
    }

    // GETS
    string Series::getSerieName(){
        return serieName;
    }

    // SETS
    void Series::setSerieName(string _serieName){
        serieName = _serieName;
    }
    void Series::setEpisodes(vector<Episodes *> _episodes){
    episodes=_episodes;
}


    // Other Methods

    void Series::showEpisodes(){
    
    cout<<"Episodes:"<<endl;
    cout<<endl;


    for(int i=0; i<episodes.size(); i++){
        cout<<"Name of the Serie: "<<episodes[i]->getSerieName()<<endl;
        cout<<"Season of the Episode: "<<episodes[i]->getSeason()<<endl;
        cout<<"Number of Episode: "<<episodes[i]->getEpisodeNumber()<<endl;
        cout<<endl;
    }
    
}

void Series::addEpisode(Episodes *episode){
    episodes.push_back(episode);
}

    void Series:: str(){
        cout << "Im a Serie" << endl;
    }