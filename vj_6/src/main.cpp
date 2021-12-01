#include <iostream>
#include <fstream>
#include <vector>
#include "model.hpp"
#include "controller.hpp"
using namespace std;


int main(){
    hangmanModel model;
    model.getRanMovie();
    Controller cont_1;
    cont_1.checkIfGameIsOver();
}