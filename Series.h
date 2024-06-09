
#include <iostream>
#include "Episodes.h"

using namespace std;

class Series:public Episodes{

    // Private
private:
    string serieName;
    array<Episodes, 2> episodes;

    // Public
public:
    // Constructor Default
    Series();

    // Parameter Constructor
    Series(string _serieName, array<Episodes, 10> _episodes);

    // Destructor
    ~Series();

    // GETS
    string getSerieName();

    // SETS
    void setSerieName(string _serieName);

    // Other Methods
    string str();

};