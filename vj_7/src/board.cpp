#include "board.hpp"
#include <iostream>
#pragma once
using namespace std;

Board::Board(){
    for (int i = 0; i < 7; i++){
        vector <char> temp;
        for (int j = 0; j < 7; j++){
            if(i == 0 || i == (6) || j ==0  || j == (6)){
			temp.push_back('#');
			}		
			else 
			temp.push_back(' ');
        }
         matrix.push_back(temp);
    }
    
}

Board::Board(int a, int b){
for (int i = 0; i < a;	 i++){
		vector <char> temp;
		for (int j = 0; j < b; j++){
			if(i == 0 || i == (a-1) || j ==0  || j == (b-1)){
			temp.push_back('#');
			}		
			else 
			temp.push_back(' ');
		}
		matrix.push_back(temp);
	}
}

Board::Board(const Board &cboard){
    for (auto x : cboard.matrix ) 
    {
        this->matrix.push_back(x);
    }
}

Board::Board(Board &b1){
    //prebacivanje iz jednog u drugog
    for (auto x : b1.matrix) 
    {
        this->matrix.push_back(x);
    }
    //b1.matrix = nullptr;

    //obrisat sve iz prvog
    while (!b1.matrix.empty())
        {
            b1.matrix.pop_back();
        }
   // b1.matrix = NULL;
    //float* matrix = new float[row];
    //b1.matrix.erase();
};


void Board::printBoard(){
    for(int i = 0; i < matrix.size(); i++){
		for (int j = 0; j < matrix[i].size();j++){
			cout << matrix[i][j];
		}
		cout << endl;
    }
}


void Board::drawBoard(Point p){
    double x = round(p.getX());
    double y = round(p.getY());
    int i ,j;

    for (i = 0; i < matrix.size(); i++){
        for (j = 0; j < matrix[i].size(); j++){
        }
    }

    if (x < i && y < j){
        matrix.at(x).at(y) = 'x';
    }   
}

void Board::drawUpLine (Point p){
    double x,y;
    x = round(p.getX());
    y = round(p.getY());

    for (int j = 1; j < x; j++){
        matrix.at(j).at(y) = '.';
    }
}

void Board::drawLine(Point p1, Point p2){
    int x1,y1,x2,y2,temp;
    x1 = round(p1.getX());
    y1 = round(p1.getY());
    x2 = round(p2.getX());
    y2 = round(p2.getY());
    

    if(x1 < x2){
        temp = x1;
        x1 = x2;
        x2 = temp;
    }

    if(y1 < y2){
        temp = y1;
        y1 = y2;
        y2 = temp;
    }

    int distance_xTOx = (x1-x2)+2;
    int distance_yTOy = (y1-y2);
    int test,counter,flag;

    if (distance_xTOx < distance_yTOy){
       test = distance_yTOy / distance_xTOx;
    }else test = (distance_xTOx / distance_yTOy);

    for (int i = x2; i <= x1 ; i++){
        for (int j = 0; j < test; j++){
            matrix.at(i).at(y2+1) = '.';
            y2++;
        }
        while (i == x1 && y2 != y1-1)
        {
            matrix.at(i).at(y2+1) = '.';
            y2++;
        }
    }
}