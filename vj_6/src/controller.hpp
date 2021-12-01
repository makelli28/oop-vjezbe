#pragma once
#include "model.hpp"
#include "view.hpp";

class Controller {
    public:
    hangmanModel model_1;
    view view_1;
    
    Controller(){model_1.getRanMovie();}
    
    char userEntry();
    void checkLetters(char letter);
    void updateLives();
    void checkIfGameIsOver();
};