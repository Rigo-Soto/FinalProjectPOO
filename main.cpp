
#include <fstream>
#include <iostream>
#include <string>

#include "Movie.h"
#include "Series.h"
#include "Episodes.h"
#include "Videos.h"

using namespace std;

int main() {

    //Read File
    ifstream f("Ejemplo.txt");
    string l;
    string type;
    int videoID;
    string title;
    string genre;
    int duration;
    double score;
    string serieTitle;
    int episode;
    int season;
    
    getline(f,l); // Read first line
    do {
        f >> type >> videoID >> title >> genre >> duration >> score;
        if (type == "e") {
            // Read serirTitle, episode and season
            f >> serieTitle >> episode >> season;
        }
        cout << title << endl;
    } while (!f.eof());

    // Show menu






    return 0;
}