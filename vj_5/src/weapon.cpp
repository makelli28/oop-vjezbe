#include "weapon.hpp"


void Weapon::Shoot(){
    if (this->CurrentClipSize != 0 )
    {
        CurrentClipSize--;
    }
    else {
        std::cout << "No more bullets! Need to relaoad" << std::endl;
    }
}

void Weapon::Reload(){
    CurrentClipSize = FullClipSize;
}

int Weapon::getx(){
    return this->WeaponPosition.getX();
}

int Weapon::gety(){
    return this->WeaponPosition.getY();
}
int Weapon::getz(){
    return this->WeaponPosition.getZ();
}

void Weapon::setz(){
    x = WeaponPosition.getZ();
    this -> bulletHitPosition.setZ(x);
}