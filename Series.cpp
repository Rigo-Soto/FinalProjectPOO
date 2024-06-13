
#include "Series.h"

    // Constructor Default
    Series::Series(){
        serieName = "Default Serie Name";
        episodes = {};
    }

    // Parameter Constructor
    Series::Series(string _serieName, vector<Episodes *> _episodes){
    serieName=_serieName;
    episodes=_episodes;
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
    void Series::setEpisodes(vector<Episodes *> _episodes){
    episodes=_episodes;
}


    // Other Methods

    void Series::showEpisodes(){
    
    cout<<"Episodios:"<<endl;
    cout<<endl;


    for(int i=0; i<episodes.size(); i++){
        cout<<"Nombre de la serie: "<<episodes[i]->getSerieName()<<endl;
        cout<<"Temporada: "<<episodes[i]->getSeason()<<endl;
        cout<<"Numero de episodio: "<<episodes[i]->getEpisodeNumber()<<endl;
        cout<<endl;
    }
    
}

void Series::addEpisode(Episodes *episode){
    episodes.push_back(episode);
}

    void Series:: str(){
        cout << "Im a Serie" << endl;
    }