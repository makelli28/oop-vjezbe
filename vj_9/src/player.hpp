#pragma once
#include <ctime>
#include <cstdlib>
class player{
    private:
    int total;
    int gamePoints;

    public:
    void setTotal(int t){this->total = t;}
    int getTotal(){return this->total;}
    int getGP(){return gamePoints;}
    void setGP(int gp){this->gamePoints = gp;}

};


class humanplayer : player{
     private:
     int total;
     int gamePoints;

    public:
    humanplayer (){
        gamePoints = 0; 
    }
    void setTotal(int t){this->total = t;}
    int getTotal(){return this->total;}
    int getGP(){return gamePoints;}
    void setGP(int gp){this->gamePoints = gp;}


};

class computerPlayer : player{
        private:
        int max;

        public:
            computerPlayer (){}
        int getMax(){return this->max;}
        void setMax(){
             srand(time(NULL));
	            int a[] = {1,2,5,3,6,7,8}; 
                max = a[rand()%sizeof(a)/sizeof(*a)];
             }

};