#pragma once
#include "model.hpp"
#include "controller.hpp"

class view{
    public:
    void displayHangman(int lives);
    void displayWords(vector <char> used);
};