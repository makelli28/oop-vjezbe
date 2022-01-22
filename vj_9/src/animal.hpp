#pragma once
#include <string.h>
using namespace std;
//definicija main klase
class Animal {
    public:
    virtual int legs() = 0 ; 
    virtual string animal_type() = 0 ;
    };

//izvedenice iz klase Animal (nazovimo xklase)
class Kukac : public Animal{
    public:
   
    int legs() {return 10;}
    string animal_type(){return "Kukac";}
    //  Kukac();
    // ~Kukac();
};

class Pauk : public Animal{
    public:
    
    int legs() {return 6;}
    string animal_type()  {return "Pauk";}
    // Pauk();
    // ~Pauk();
};

class Ptica : public Animal{
    public:
    
    int legs() {return 2;}
    string animal_type(){return "Ptica";}
    // Ptica();
    // ~Ptica();
};

//izvedenice iz xkklase
class stonoga : public Kukac{
//    int legs = 100;
//    string animal_type= "Stonoga";

   public:
   string animal_type(){return "Stonoga";}
   int legs(){return 100;}
};

class crnaudovica : public Pauk{
    // int legs = 8;
    // string animal_type = "CrnaUdovica";

    public:
    string animal_type(){return "crnaudovica";}
    int legs(){return 6;}  
};

class orao :public Ptica{
    // int legs = 3;
    // string animal_type = "TroglaviTronogiOrao";

    public: 
    int legs(){return 2;}   
    string animal_type(){return "orao";}
};