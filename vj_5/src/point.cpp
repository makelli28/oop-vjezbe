#include "point.hpp"
Point::Point(){
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

void Point::setRandomValue(int min, int max){
    x = (min+( rand() % (max-min+1))); 
    y = (min+( rand() % (max-min+1))); 
    z = (min+( rand() % (max-min+1)));
}

