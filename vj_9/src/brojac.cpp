#pragma once
#include <iostream>
#include "brojac.hpp"
#include "animal.hpp"
using namespace std;


void brojac::setAnimal(Animal &a){
   cout << "dodan: " << a.animal_type() << endl;
   legs += a.legs();
   
}

void brojac::legcounter(){
    cout << "broj nogice: " << legs <<endl;
}