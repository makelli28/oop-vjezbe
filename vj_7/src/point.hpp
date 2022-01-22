#pragma once

class Point {
    private:
    double x,y;
    
    public:
    Point(double a,double b){
        this->x = a;
        this->y = b;
    }

    //setter necemo, preko konstruktora dodajemo vrijednosti
    double getX(){return this->x;}
    double getY(){return this->y;}
};