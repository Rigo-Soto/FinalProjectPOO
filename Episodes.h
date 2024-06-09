
#include <iostream>

using namespace std;

class Episodes{
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
    Episodes(string _serieName, int _season, int _episodeNumber);

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
    string str();

};