#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h> 

using std::string;
using std::cout;
using std::string;
using std::vector;
using std::endl;
using std::cin;


class hangmanModel {
    private:
    int lives = 7;
    string movieName = "";
    string movieUnderLine = "";
    
    public:
    vector <string> usedletters;
    string getterMovie(){return movieName;}
    string getterUnderscore(){return movieUnderLine;}
    int getterLives(){return lives;}
    void setterLives(int a){this->lives = a;}
    void getRanMovie();
    void setGuessedString(string newstring){this->movieUnderLine = newstring;}
 };
