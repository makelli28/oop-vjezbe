#pragma once
#include "point.hpp"
extern int low,high;

class Target {
    private:
    Point TargetLD,TargetUR;

    public:
        Target(){
            TargetLD.setRandomValue(low,high);
            TargetUR.setRandomValue(low,high);
        }

        int GetDotLD_x();
        int GetDotLD_y();
        int GetDotLD_z();
      
        int GetDotUR_x();
        int GetDotUR_y();
        int GetDotUR_z();
};