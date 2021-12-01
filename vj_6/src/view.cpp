#pragma once
#include "model.hpp"
#include "controller.hpp"
#include "view.hpp"

void view::displayHangman(int lives){
    
    switch (lives)
    {
    case 7:
        cout << " _________    " << endl;
        cout << "| /           " << endl;
        cout << "|/            " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;

        break;
    case 6:
        cout << " _________    " << endl;
        cout << "| /       |   " << endl;
        cout << "|/            " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;
        break;
    case 5:
        cout << " _________    " << endl;
        cout << "|  /      |   " << endl;
        cout << "| /       |   " << endl;
        cout << "|/            " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;
        break;
    case 4:
        cout << " _________    " << endl;
        cout << "|  /      |   " << endl;
        cout << "| /       |   " << endl;
        cout << "|/      (O.O)   " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;
        break;
    case 3:
        cout << " _________    " << endl;
        cout << "|  /      |   " << endl;
        cout << "| /       |   " << endl;
        cout << "|/      (O.O)   " << endl;
        cout << "|        / \\    " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;
        break;
    case 2:
        cout << " _________    " << endl;
        cout << "|  /      |   " << endl;
        cout << "| /       |   " << endl;
        cout << "|/      (O.O)   " << endl;
        cout << "|       /( )\\   " << endl;
        cout << "|            " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;
        break;
    case 1:
        cout << " _________    " << endl;
        cout << "|  /      |   " << endl;
        cout << "| /       |   " << endl;
        cout << "|/      (O.O)   " << endl;
        cout << "|       /( )\\   " << endl;
        cout << "|        / \\  " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;
        break;
    case 0:
        cout << " _________    " << endl;
        cout << "|  /      |   " << endl;
        cout << "| /       |   " << endl;
        cout << "|/      (X.X)   " << endl;
        cout << "|       /( )\\   " << endl;
        cout << "|        / \\  " << endl;
        cout << "|             " << endl;
        cout << "|             " << endl;
        cout << "|___________  " << endl;
        break;
    default:
        break;
    }
}

void view::displayWords (vector <char> chars){
    cout << "Used Chars: ";
    for(int i=0; i < chars.size(); i++ ){
        cout  << chars.at(i);
    }
}
