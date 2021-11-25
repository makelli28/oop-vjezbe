#pragma once
#include "point.hpp"
#include <iostream>
extern int low,high;
class Weapon {
    private:
        Point WeaponPosition,bulletHitPosition;
        double x,y,z;
        int FullClipSize = 5;
        int CurrentClipSize = 5;
    public:       
    
        Weapon(){WeaponPosition.setRandomValue(low,high);}
       
        void Shoot();
        void Reload();
        
        int getx();
        int gety();
        int getz();
        void setz();
        
        int getCurrentClipSize() const {return this->CurrentClipSize;}
        int getFullClipSize() const {return this->FullClipSize;}
};      
