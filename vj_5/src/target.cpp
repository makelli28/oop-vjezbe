#include "target.hpp"

int Target::GetDotLD_x(){
    return this->TargetLD.getX();
}
int Target::GetDotLD_y(){
    return this->TargetLD.getY();
}
int Target::GetDotLD_z(){
    return this->TargetLD.getZ();
}

int Target::GetDotUR_x(){
    return this->TargetUR.getX();
}
int Target::GetDotUR_y(){
    return this->TargetUR.getY();
}
int Target::GetDotUR_z(){
    return this->TargetUR.getZ();
}