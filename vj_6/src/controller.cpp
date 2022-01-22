#pragma once
#include "controller.hpp"
#include "view.hpp"
char letter;
vector <char> used;

char Controller::userEntry(){
    cout << endl;
    cout << "Enter letter." << endl;
    cin >> letter;
    used.push_back(letter);
    return letter;
}
void Controller::checkLetters(char letter){
    string movie = model_1.getterMovie();
    string underscore = model_1.getterUnderscore();
    int size = movie.size();
    int flag = 0;

    for (int i = 0; i < movie.size() ; i++){
        if (movie.at(i) == letter){
            underscore[i] = letter;
            model_1.setGuessedString(underscore);
            flag++;
        }
    }
    if (flag == 0 ){
        int currentLives = model_1.getterLives();
        currentLives--;
        model_1.setterLives(currentLives);
    }
}

//nepotrebno?
void Controller::updateLives(){
    cout << "Current Lives = " << model_1.getterLives() << endl;
}
void Controller::checkIfGameIsOver(){
   cout << "Game is about to start..." << endl;
   cout << "Your current lives: " << model_1.getterLives() <<endl;
   //cout << "FILM: " << model_1.getterMovie() << endl;
   cout << model_1.getterUnderscore();
    while (1){
        if(model_1.getterMovie() == model_1.getterUnderscore()){
            cout << endl;
            cout << "You win!";
            break;
        }
        else if(model_1.getterLives() == 0){
            cout << endl << "Damn! Dead!"<<endl;
            view_1.displayHangman(model_1.getterLives());
            break;
        }
        cout<< endl;
        view_1.displayHangman(model_1.getterLives());
        userEntry();
        checkLetters(letter);
        cout << "Guessing Moive: " << model_1.getterUnderscore() << endl;
        updateLives();
        view_1.displayWords(used);
    }
}

