#include "model.hpp"

void hangmanModel::getRanMovie(){
    srand (time(NULL));
    std::ifstream movies;
    movies.open("/home/makelli/Desktop/c++/vj_6/src/movies.txt",std::ios::in);
    
    //čitamo sve filmove iz .txt i spremamo u vektor
    vector <string> moviesList;
    string movie;
    while (getline(movies,movie)){
        moviesList.push_back(movie);
    }

    //vadimo sa random brojem jedan string(film) iz vektora stringova
    int randomMovieIndex =  rand() % moviesList.size();
    string movieToAddRAW = moviesList[randomMovieIndex];
    string movieToAdd;
    string movie_unguessed;

    //modifikacije string(napravit sva velika slova , izbacit posebne znakove(' and : and -))
    for (int i = 0; i < movieToAddRAW.size(); i++)
    {
        if(movieToAddRAW[i] == ':' || movieToAddRAW[i] == '-' || movieToAddRAW[i] == '\''){
            continue;
        }
        else if (movieToAddRAW[i] == ' ')
        { 
            movieToAdd.push_back(movieToAddRAW[i]);
            movie_unguessed.push_back(' ');
        }
        else{
            movieToAdd.push_back(toupper(movieToAddRAW[i]));
            movie_unguessed.push_back('-');
        }
        
    movieName = movieToAdd;  
    movieUnderLine = movie_unguessed;      
    }
    movies.close();
}