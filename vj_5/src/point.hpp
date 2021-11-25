#pragma once 
#include <ctime>
#include <stdlib.h>
#include <cmath>


class Point {
    private:
        double x,y,z;
    public:
        Point ();
        void setRandomValue(int low,int high);
        double distance2d(Point const& p) {return (sqrt(pow(p.getX() - this->x,2)+pow(p.getY()-this->y,2)));}
        double distance3(Point const& p){return (sqrt(pow(p.getX()-this->x,2)+pow(p.getY()-this->y,2)+pow(p.getZ()-this->z,2)));};

        double getX() const {return this->x;}
        double getY() const {return this->y;}
        double getZ() const {return this->z;}

        void setX(double x){this->x = x; }
        void setY(double y){this->y = y; }
        void setZ(double z){this->z = z; }
};