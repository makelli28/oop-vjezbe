#pragma once
#include <vector>
#include "point.hpp"
#include <cmath>
using namespace std;

class Board{
    private:
       vector <vector<char>> matrix ;
    public:
    Board();
    Board(int a ,int b);
    Board(const Board &cboard);//copy const;
    Board(Board &b1);
    ~Board(){
        while (!matrix.empty())
        {
            matrix.pop_back();
        }
    }
    //move construltor - prebaciti sve iz jednog u drugog (prvi ce biti null)
    
    void drawBoard(Point p);
    void printBoard();
    void drawUpLine(Point p);
    void drawLine(Point p1,Point p2);


};