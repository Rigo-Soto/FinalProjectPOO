#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Movie.h"
#include "Series.h"
#include "Episodes.h"
#include "Videos.h"


void videosFromRating(string loadedFile, double ratingVideos) {

    vector<Movie *> movies;
    vector<Episodes *> episodes;


    ifstream file(loadedFile);
    ifstream f(loadedFile);
    string textLine;
    string typeofMedia;

    int ID;
    string name;
    string genre;
    int duration;
    double score;

    string serieName;
    int episodeNumber;
    int season;
        
    getline(f, textLine);

    //Read Line
    f >> typeofMedia >> ID >> name >> genre >> duration >> score;

    //If the media is a movie
    if (typeofMedia == "p") {
        Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
        movies.push_back(p);
    } 
    
    //If the media is an episode
    else if (typeofMedia == "e") {
        f >> serieName >> episodeNumber >> season;

        Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season, episodeNumber);
        episodes.push_back(e);
    }

        cout<<"Movies:" << endl;
    
    //Show the movies with the rating
    for (Movie *movie: movies){
        
        if (movie -> getScore()== ratingVideos){
            cout<<"ID: "<<movie -> getID()<<endl;
            cout<<"Title: "<<movie -> getName()<<endl;
            cout<<"Genre: "<<movie -> getGenre()<<endl;
            cout<<"Duration: "<<movie -> getDuration()<<endl;
            cout<<"Score: "<<movie -> getScore()<<endl;
            movie -> str();
            cout<<endl;
        }
        else{
            cout<<"They arent videos with "<< ratingVideos << ", rating" << endl;
            cout<<endl;
        }
        
    }
        
    
    
    cout<<"Episodes:"<<endl << endl;
        
    for (Episodes *episode: episodes){
        
        if (episode -> getScore()==ratingVideos){
            
            cout<<"ID: "<<episode -> getID()<<endl;
            cout<<"Title: "<<episode -> getName()<<endl;
            cout<<"Genre: "<<episode -> getGenre()<<endl;
            cout<<"Duration: "<<episode -> getDuration()<<endl;
            cout<<"Score: "<<episode -> getScore()<<endl;
            cout<<"Serie Title: "<<episode -> getSerieName()<<endl;
            cout<<"Episode Number: "<<episode -> getEpisodeNumber()<<endl;
            cout<<"Season: "<<episode -> getSeason()<<endl;
            episode -> str();
            cout<<endl;
            
        }
        else{
            cout<<"They arent videos with "<< ratingVideos <<", rating" << endl;
            cout<<endl;
        }
        
    }
};

void videosFromGenre(string loadedFile, string genreVideos) {

    vector<Movie *> movies;
    vector<Episodes *> episodes;

    ifstream f(loadedFile);
    string textLine;
    string typeofMedia;

    int ID;
    string name;
    string genre;
    int duration;
    double score;

    string serieName;
    int episodeNumber;
    int season;
        
    getline(f, textLine);

    //Read Line
    f >> typeofMedia >> ID >> name >> genre >> duration >> score;

    //If the media is a movie
    if (typeofMedia == "p") {
        Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
        movies.push_back(p);
    } 
    
    //If the media is an episode
    else if (typeofMedia == "e") {
        f >> serieName >> episodeNumber >> season;

        Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season, episodeNumber);
        episodes.push_back(e);
    }

        cout<<"Movies:" << endl;
    
    //Show the movies with the rating
    for (Movie *movie: movies){
        
        if (movie -> getGenre() == genreVideos){
            cout<<"ID: "<<movie -> getID()<<endl;
            cout<<"Title: "<<movie -> getName()<<endl;
            cout<<"Genre: "<<movie -> getGenre()<<endl;
            cout<<"Duration: "<<movie -> getDuration()<<endl;
            cout<<"Score: "<<movie -> getScore()<<endl;
            movie -> str();
            cout<<endl;
        }
        else{
            cout<<"They arent videos with "<< genreVideos << ", rating" << endl;
            cout<<endl;
        }
        
    }
        
    
    
    cout<<"Episodes:"<<endl << endl;
        
    for (Episodes *episode: episodes){
        
        if (episode -> getGenre() == genreVideos){
            
            cout<<"ID: "<<episode -> getID()<<endl;
            cout<<"Title: "<<episode -> getName()<<endl;
            cout<<"Genre: "<<episode -> getGenre()<<endl;
            cout<<"Duration: "<<episode -> getDuration()<<endl;
            cout<<"Score: "<<episode -> getScore()<<endl;
            cout<<"Serie Title: "<<episode -> getSerieName()<<endl;
            cout<<"Episode Number: "<<episode -> getEpisodeNumber()<<endl;
            cout<<"Season: "<<episode -> getSeason()<<endl;
            episode -> str();
            cout<<endl;
            
        }
        else{
            cout<<"They arent videos with "<< genreVideos <<", rating" << endl;
            cout<<endl;
        }
        
    }
};


int main() {

    string loadedFile;
    int optionChoosed;
    int option2Choosed;

       

        loadedFile = "TestCase.txt";


        cout << "------------------------------------------------------------------------" << endl;
        cout << "Welcome to the Movie and Series App" << endl << endl;

        cout << "Menu:" << endl;
        cout << "1. Load data file" << endl;
        cout << "2. Show the videos with a specific rating or from a specific genre" << endl;
        cout << "3. Show the episodes of a specific series with a specific rating" << endl;
        cout << "4. Show the movies with a specific rating" << endl;
        cout << "5. Rate a Video" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "------------------------------------------------------------------------" << endl;


        cout << "To continue, please choose an option from the menu: ";
        cin >> optionChoosed;
        cout << endl;

        switch (optionChoosed) {

            // CASE 1 - Load data file

            case 1:
                cout << "To continue, please write the name of the file you want to load (Default: TestCase.txt)" << endl;
                cin >> loadedFile;

                if (loadedFile.find(".txt") != string::npos) {
                    cout << "The file was loaded successfully" << endl;
                } else {
                    cout << "The file could not be loaded" << endl;
                    cout << "The default file will be loaded" << endl;

                    loadedFile = "TestCase.txt";
                    cout << endl;
                }

                break;

                // CASE 2. Show the videos with a specific rating or from a specific genre

            case 2:

                cout << "1. Show the videos with a specific rating" << endl;
                cout << "2. Show the videos from a specific genre" << endl << endl;

                cout << "Choose an option: ";
                cin >> option2Choosed;

                if (option2Choosed == 1) {
                    cout << "Please write the rating you want to search: ";
                    double desiredRating;
                    cin >> desiredRating;

                    cout << "The videos with the rating " << desiredRating << " are: " << endl;

                    //Swow the videos with the rating
                    videosFromRating(loadedFile, desiredRating);

                } 
                else if (option2Choosed == 2) {
                    cout << "Please write the genre you want to search: ";
                    string desiredGenre;
                    cin >> desiredGenre;

                    cout << "The videos from the genre " << desiredGenre << " are: " << endl;

                    //Show the videos from the genre
                    videosFromGenre(loadedFile, desiredGenre);

                } 
                else {
                    cout << "Invalid option" << endl;
                }
                
                break;
                
            default:
                cout << "Invalid option, please try again" << endl;

                cout << endl;
                
        }

    

    return 0;
}