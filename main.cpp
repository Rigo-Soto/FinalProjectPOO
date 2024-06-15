#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Movie.h"
#include "Series.h"
#include "Episodes.h"
#include "Videos.h"


// Function for 2.1
void videosFromRating(string loadedFile, double ratingVideos) {

    //Create the vectors to store the movies and episodes
    vector<Movie *> movies;
    vector<Episodes *> episodes;

    //Open the file
    ifstream f(loadedFile);
    string textLine;

    string typeofMedia;

    //Variables to store the information of the media
    int ID;
    string name;
    string genre;
    int duration;
    double score;
    string serieName;
    int episodeNumber;
    int season;
        
    getline(f, textLine);

    do{
        //Read Line
        f >> typeofMedia >> ID >> name >> genre >> duration >> score;


        //If the media is an episode
        if (typeofMedia == "e") {
            f >> serieName >> episodeNumber >> season;

            Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season, episodeNumber);
            episodes.push_back(e);
        }
        
        //If the media is a movie
        else{
            Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
            movies.push_back(p);
        }

    }while (!f.eof());

    cout<<"Movies:" << endl;

    bool test2_1 = false;
    
    //Show the movies with the rating
    for (Movie *movie: movies){
        
        if (movie -> getScore()== ratingVideos){
            test2_1 = true;
            cout<<"ID: "<<movie -> getID()<<endl;
            cout<<"Title: "<<movie -> getName()<<endl;
            cout<<"Genre: "<<movie -> getGenre()<<endl;
            cout<<"Duration: "<<movie -> getDuration()<<endl;
            cout<<"Score: "<<movie -> getScore()<<endl;
            movie -> str();
            cout<<endl;
        }
    }

        if (test2_1 = true){
        cout << "There arent movies with rating of "<< ratingVideos << " :(" << endl;
        cout << endl;
        }
    
    bool test2_2 = false;

    cout<<"Episodes:" <<endl;
        
    for (Episodes *episode: episodes){
        
        if (episode -> getScore()==ratingVideos){

            test2_2 = true;
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
    }
        if (test2_2 = true){
        cout<<"There arent episodes with rating of "<< ratingVideos << " :(" << endl;
        cout<<endl;
    }
};


// Function for 2.2
void videosFromGenre(string loadedFile, string genreVideos) {

    //Create the vectors to store the movies and episodes
    vector<Movie *> movies;
    vector<Episodes *> episodes;

    //Open the file
    ifstream f(loadedFile);
    string textLine;

    //Variables to store the information of the media
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

    do{

        //Read Line
        f >> typeofMedia >> ID >> name >> genre >> duration >> score;


        //If the media is an episode
        if (typeofMedia == "e") {
            f >> serieName >> episodeNumber >> season;
            Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season, episodeNumber);
            episodes.push_back(e);
        }
        
        //If the media is a movie
        else{
            Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
            movies.push_back(p);
        }

    }while (!f.eof());
    
    cout<<"Movies:" << endl;

    bool test2_2 = false;
    
    //Show the movies with the rating
    for (Movie *movie: movies){
        
        if (movie -> getGenre() == genreVideos){
            test2_2 = true;
            cout<<"ID: "<<movie -> getID()<<endl;
            cout<<"Title: "<<movie -> getName()<<endl;
            cout<<"Genre: "<<movie -> getGenre()<<endl;
            cout<<"Duration: "<<movie -> getDuration()<<endl;
            cout<<"Score: "<<movie -> getScore()<<endl;
            movie -> str();
            cout<<endl;
        }
    }

        if (test2_2 = true){
        cout << "There arent movies with genre of "<< genreVideos << " :(" << endl;
        cout << endl;
        }
    
    bool test2_3 = false;
    
    cout<<"Episodes:" <<endl;
        
    for (Episodes *episode: episodes){
        
        if (episode -> getGenre()== genreVideos){
            test2_3 = true;
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
    }

        if (test2_3 = true){
        cout<<"There arent episodes with genre of "<< genreVideos << " :(" << endl;
        cout<<endl;
        
    }
};

//Function for 3
void episodesOfSerieWithRanking(string loadedFile, string serieName, double ranking){

    //Create the vectors to store the movies and episodes
    vector<Movie *> movies;
    vector<Episodes *> episodes;

    //Open the file
    ifstream f(loadedFile);
    string textLine;

    //Variables to store the information of the media
    string typeofMedia;
    int ID;
    string name;
    string genre;
    int duration;
    double score;
    string nameOfSerieChoosen;
    int episodeNumber;
    int season;
        
    getline(f, textLine);

    do{
        //Read Line
        f >> typeofMedia >> ID >> name >> genre >> duration >> score;


        //If the media is an episode
        if (typeofMedia == "e") {
            f >> serieName >> episodeNumber >> season;
            Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season, episodeNumber);
            episodes.push_back(e);
        }
        
        //If the media is a movie
        else{
            Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
            movies.push_back(p);
        }

    }while (!f.eof());

    vector<Episodes *> episodes_serie;

    bool test3_1 = false;

    for(Episodes *episode: episodes){

        if(episode -> getSerieName() == serieName && episode -> getScore() == ranking){
            test3_1 = true;
            episodes_serie.push_back(episode);


        }
    }

    Series serie(serieName, episodes_serie);
    cout << "Name of the Serie: " << serie.getName() << endl << endl;
    serie.showEpisodes();


    if(!test3_1){
        cout << "There arent episodes with rank of " << ranking << " for that serie :(" << endl << endl; 
    }
};

//Function for 4
void moviesOfRanking(string loadedFile, double ranking){

    //Create the vectors to store the movies and episodes
    vector<Movie *> movies;
    vector<Episodes *> episodes;

    //Open the file
    ifstream f(loadedFile);
    string textLine;

    //Variables to store the information of the media
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

    do{
        //Read Line
        f >> typeofMedia >> ID >> name >> genre >> duration >> score;


        //If the media is an episode
        if (typeofMedia == "e") {
            f >> serieName >> episodeNumber >> season;
            Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season, episodeNumber);
            episodes.push_back(e);
        }
        
        //If the media is a movie
        else{
            Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
            movies.push_back(p);
        }

    }while (!f.eof());

    cout << "Movies: " << endl << endl;

    bool test4_1 = false;
    
    for(Movie *movie: movies){
        if(movie -> getScore() == ranking){
            test4_1 = true;

            cout << "ID: " << movie -> getID() << endl;
            cout << "Movie Name: " << movie -> getName() << endl;
            cout << "Genre: " << movie -> getGenre() << endl;
            cout << "Duration: " << movie -> getDuration() << endl;
            cout << "Score: " << movie -> getScore() << endl << endl;
        }
    }

    if(!test4_1){
        cout << "There arent any movies with " << ranking << " of ranking :(" << endl << endl;
    }
};

void vidsearch( string loadedfile ,string Sname,double rate ) {
        // Create the vectors to store the movies and episodes
        vector<Movie *> movies;
        vector<Episodes *> episodes;

        // Open the file
        ifstream f(loadedfile);
        if (!f.is_open()) {
            cout << "Error opening file!!!" << endl;
            return;
        }
        string text_line;
         getline(f,text_line);

        string typeofMedia;
        int ID;
        string genre;
        int duration;
        double score;
        string serieName;
        string name;
        int episodeNumber;
        int season;

        while (f >> typeofMedia >> ID >> name >> genre >> duration >> score) {

            if (typeofMedia == "e") {
                f >> serieName >> season >> episodeNumber;
                Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season, episodeNumber);
                episodes.push_back(e);
            }
            else{
                Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
                movies.push_back(p);
            }
        }

        vector<Episodes *> episodes_search;
        vector<Movie *> movie_search;

        bool found = false;
        int definer = 0;

        // Search in episodes
        for (Episodes *episode: episodes) {
            if (episode->getName() == Sname) {
                found = true;
                definer = 1;
                episode->setScore(rate);
                episodes_search.push_back(episode);
            }
        }

        // Search in movies
        for (Movie *movie: movies) {
            if (movie->getName() == Sname) {
                found = true;
                definer = 2;
                movie->setScore(rate);
                movie_search.push_back(movie);
            }
        }

        switch (definer) {
            case 1: {
                Series serie(name, episodes_search);
                cout << "Name of the episode: " << Sname << endl;
                cout << "The score is now: " << rate << endl;
                serie.showEpisodes();
                break;
            }

            case 2: {
                if (!movie_search.empty()) {
                    Movie *Themovie = movie_search.front(); 
                    cout << "Name of the Movie: " << Themovie->getName() << endl;
                    cout << "The score is now: " << Themovie->getScore() << endl;
                }
                break;
            }
        }

        if (!found) {
            cout << "Video not found" << endl << endl;
        }

        for (Movie *movie: movies) {
            delete movie;
        }
        for (Episodes *episode: episodes) {
            delete episode;
        }
    }

void showrating(string loadedfile,string Sname) {
        // Create the vectors to store the movies and episodes
        vector<Movie *> movies;
        vector<Episodes *> episodes;

        // Open the file
        ifstream f(loadedfile);
        if (!f.is_open()) {
            cout << "Error opening file!!!" << endl;
            return;
        }
        string text_line;
        getline(f, text_line);

        string typeofMedia;
        int ID;
        string genre;
        int duration;
        double score;
        string serieName;
        string name;
        int episodeNumber;
        int season;

        while (f >> typeofMedia >> ID >> name >> genre >> duration >> score) {

            if (typeofMedia == "e") {
                f >> serieName >> season >> episodeNumber;
                Episodes *e = new Episodes(typeofMedia, ID, name, duration, genre, score, serieName, season,
                                           episodeNumber);
                episodes.push_back(e);
            } else {
                Movie *p = new Movie(typeofMedia, ID, name, duration, genre, score);
                movies.push_back(p);
            }
        }

        vector<Episodes *> episodes_search;
        vector<Movie *> movie_search;

        bool found = false;
        int definer = 0;

        // Search in episodes
        for (Episodes *episode: episodes) {
            if (episode->getName() == Sname) {
                found = true;
                definer = 1;
                episodes_search.push_back(episode);
            }
        }

        // Search in movies
        for (Movie *movie: movies) {
            if (movie->getName() == Sname) {
                found = true;
                definer = 2;
                movie_search.push_back(movie);
            }
        }

        switch (definer) {
            case 1: {
                Series serie(name, episodes_search);
                cout << "Name of the episode: " << Sname << endl;
                cout << "The score of this episode is:  " << serie.getScore() << endl;
                serie.showEpisodes();
                break;
            }

            case 2: {
                if (!movie_search.empty()) {
                    Movie *Themovie = movie_search.front(); // Assuming you want the first movie that matches
                    cout << "Name of the Movie: " << Themovie->getName() << endl;
                    cout << "The score of the movie is:  " << Themovie->getScore() << endl;
                }
                break;
            }
        }

        if (!found) {
            cout << "Video not found" << endl << endl;
        }

        // Clean up dynamically allocated memory
        for (Movie *movie: movies) {
            delete movie;
        }
        for (Episodes *episode: episodes) {
            delete episode;
        }
    }







int main() {
    
    int optionChoosed;

    // Case 1 Variables
    string loadedFile;

    // Case 2 Variables
    int option2Choosed;
    string desiredGenre2;

    // Case 3 Variables
    string desiredSerie3;
    double desiredRating3;

    // Case 4 Variables
    double desiredRating4;
    
    // Case 5 Variables
    int option5Choosed;


        while(true){

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

                    switch (option2Choosed){

                        case 1:
                            cout << "Please write the rating you want to search: ";
                            double desiredRating2;
                            cin >> desiredRating2;

                            cout << endl << endl << "The videos with the rating " << desiredRating2 << " are: " << endl << endl;

                            //Swow the videos with the rating
                            videosFromRating(loadedFile, desiredRating2);

                            break;
                        
                        case 2:
                            cout << "Please write the genre you want to search: ";
                            cin >> desiredGenre2;

                            cout << endl << endl << "The videos from the genre " << desiredGenre2 << " are: " << endl << endl;

                            //Show the videos from the genre
                            videosFromGenre(loadedFile, desiredGenre2);

                            break;

                        default:
                            cout << "Invalid option" << endl;

                            break;
                    }
                    
                    break;

                // CASE 3. Show the episodes of a specific series with a specific rating
                case 3:
                    cout << "Please write the name of the series you want to search: ";
                    cin >> desiredSerie3;

                    cout << "Please write the rating you want to search: ";
                    cin >> desiredRating3;

                    cout << endl << endl << "The episodes of the series " << desiredSerie3 << " with the rating " << desiredRating3 << " are loading..." << endl << endl;

                    //Show the episodes of the series with the rating
                    episodesOfSerieWithRanking(loadedFile, desiredSerie3, desiredRating3);

                    break;

                // CASE 4. Show the movies with a specific rating
                case 4:
                    cout << "Please write the rating you want to search in movies: ";
                    cin >> desiredRating4;

                    cout << endl << endl << "The movies founded with rating of " << desiredRating4 << " are loading..."  << endl << endl;

                    //Show the movies with the desired rating
                    moviesOfRanking(loadedFile, desiredRating4);

                    break;

                // CASE 5. Rate a Video or Ask For the Rating
                int des;
                double calification;
                cout << "Would you like to rate a video (1) or view the rating of a video (2)" << endl;
                try {
                    cin >> des;
                    if (des == 1) {
                        string nameoR;
                        cout << "Which video would you like to rate? " << endl;
                        cin >> nameoR;
                        cout << "How much would you rate it?" << endl;
                        cin >> calification;
                        vidsearch(loadedFile, nameoR, calification);
                        exit(1);
                    } else if (des == 2) {
                        string interest;
                        cout<<"Which video would yuo like to display its rating?"<<endl;
                        cin>>interest;
                        showrating(loadedFile,interest);

                    } else {
                        throw ("Error");
                    }
                }
                catch (...) {
                    cout << "Invalid option, just 1 or 2 allowed" << endl;
                    exit(1);
                }
                break;

                case 6:
                    cout << "You are leaving, Thanks :)" << endl << endl;

                    return 0;

                default:
                    cout << "Invalid option, please try again" << endl;

                    cout << endl;
            }        
        }

    return 0;

}
