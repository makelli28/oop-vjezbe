#include "timer.hpp"
#include <iostream>
using namespace std;

timer& timer::operator+= (timer& timerA ){
    this->h += timerA.h;
    this->m += timerA.m;
    this->s += timerA.s;

    if(this->m >=  60 ){
        this->m = this->m - 60;
    }

    if(this->s >= 60){
        this->s = this->s - 60;
    }
    return *this;
}

timer& timer::operator/=(int x){
    this->h = this->h / x;
    this->m = this->m / x;
    this->s = this->s / x;

    return *this;
}

 ostream& operator<<(ostream& COUT, timer& printTimer){
     COUT << endl << "h:" << printTimer.getH() <<" m:"<< printTimer.getM()<<" s:" <<printTimer.getS()<< endl;
     return COUT;
 }

bool timer::operator<(timer& t1){
    int hours = this->h*3600;
    int minutes = this->m*60;
    double seconds = this->s;

    double total_first = ((double)hours*3600) * ((double)minutes*60) * seconds;
    double total_second = (double)t1.h * (double)t1.m * seconds;

    if (total_first < total_second){
        return true;
    }
    else return false;
}

timer::operator double(){
    double total;
    total = ((double)this->h*3600)+ ((double)this->m*60) + this->s;
    return total;
}

timer timer::operator-(timer& t1){
    timer final;

    final.h = this->h - t1.h;
    final.s = this->s - t1.s;
    final.s = this->s - t1.s;
    return final;
}
