#pragma once
#include <iostream>
using namespace std;

class timer{
    private:
    int h,m;
    double s;

    public:

    timer(int hour,int minute,double sec){
        this->h = hour;
        this->m = minute;
        this->s = sec;
    }

    timer(){
        this->h =0;
        this->m =0;
        this->s =0;
    }

    void setH(int hour){this->h = hour;}
    void setM(int min){this->m = min;}
    void setS(double sec){this->s = sec;}
    int getH(){return this->h;} 
    int getM(){return this->m;}
    double getS(){return this->s;}
    
    timer& operator+= (timer&);
    timer& operator/= (int);
    friend ostream& operator<<(ostream& ,timer&);
    bool operator<(timer&);
    operator double();
    timer operator-(timer&);
};

class penalty{
    private:
    double pen_sec;

    public:
    penalty(double seconds){
        pen_sec = seconds;
    }

    timer operator()(timer& t1){
        t1.setS(t1.getS() + pen_sec);
        return t1;
    }
};