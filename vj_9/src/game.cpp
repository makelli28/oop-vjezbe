#pragma once
#include "game.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


void game::gameStarterComputer(computerPlayer cp1,computerPlayer cp2){
    int points,c1guess,c2guess;
    srand(time(NULL));
	int a[] = {1,2,5,3,6,7,8}; 
    int cp1correct = 0;
    int cp2correct = 0;
    

        cout << "Computer game is starting..." << endl << "Please enter points for winning game: ";
        cin >> points;

        while ( cp1correct != points && cp2correct != points){
            cp1.setMax();
            cp2.setMax();
            c2guess = a[rand()%sizeof(a)/sizeof(*a)];
            c1guess = a[rand()%sizeof(a)/sizeof(*a)];

            if(cp2.getMax() == c1guess){
                cout <<"Computer Player 1 guessed correct!" << endl;
                cp1correct++;
                if (cp1correct == points)
                {
                    cout << "Player 1 is winner!";
                    break;
                }
            }
            if (cp1.getMax() == c2guess){
                cout <<"Computer Player 2 guessed correct!" << endl;
                cp2correct++;
                if(cp2correct == points){
                    cout << "Player 2 is winner" << endl;
                    break;
                }
            }

            if(cp1.getMax() != c2guess && cp2.getMax() != c1guess){
                cout << "No1 did guess!" << endl;
            }

            
        }
        
}

void game::gameStarterPvP(humanplayer p1,humanplayer p2){
    int pointsP1,pointsP2,guessP1,guessP2,points,pickp1,pickp2;
    cout << "PVP JapaneŽ! Please choose points to win: ";
    cin >> points;

    while (pointsP1 != points && pointsP2 != points){
        p1.setTotal(0);
        p2.setTotal(0);

        cout << "Player 1 is picking coins...Pick 1, 3, or 5!" << endl;
        cin >> pickp1;

        if (pickp1 != 1 && pickp1 != 3 && pickp1 != 5){
            cout << "You dont play by rules, you are boring goodbye." << endl;
            break;
        }

        if (pickp1 == 1){
            p1.setTotal(p1.getTotal()+pickp1);
            cout << "Coin's left to pick: 3, 5. Enter to 0 finish your turn, or pick more coins: ";
            cin >> pickp1;
            if (pickp1 == 3)
            {
                p1.setTotal(p1.getTotal()+pickp1);
                cout << "Coin's left to pick: 5. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp1;
                if(pickp1 == 5){
                    p1.setTotal(p1.getTotal()+pickp1);
                    cout << "You picked your coins. Player 2 turn."<< endl;
                    pickp1 = 0;
                }
            }
            else if (pickp1 == 5){
                p1.setTotal(p1.getTotal()+pickp1);
                cout << "Coin's left to pick: 3. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp1;
                if (pickp1 == 3){
                    p1.setTotal(p1.getTotal()+pickp1);
                    cout << "You picked your coins. Player 2 turn."<< endl;
                    pickp1 = 0;
                }
            }
        }   

       if (pickp1 == 3){
            p1.setTotal(p1.getTotal()+pickp1);
            cout << "Coin's left to pick: 1, 5. Enter to 0 finish your turn, or pick more coins: ";
            cin >> pickp1;
            if (pickp1 == 1)
            {
                p1.setTotal(p1.getTotal()+pickp1);
                cout << "Coin's left to pick: 5. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp1;
                if(pickp1 == 5){
                    p1.setTotal(p1.getTotal()+pickp1);
                    cout << "You picked your coins. Player 2 turn."<< endl;
                    pickp1 = 0;
                }
            }
            else if (pickp1 == 5){
                p1.setTotal(p1.getTotal()+pickp1);
                cout << "Coin's left to pick: 1. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp1;
                if (pickp1 == 1){
                    p1.setTotal(p1.getTotal()+pickp1);
                    cout << "You picked your coins. Player 2 turn."<< endl;
                    pickp1 = 0;
                }
            }
            
        }  
    
        if (pickp1 == 5){
            p1.setTotal(p1.getTotal()+pickp1);
            cout << "Coin's left to pick: 1, 3. Enter to 0 finish your turn, or pick more coins: ";
            cin >> pickp1;
            if (pickp1 == 1)
            {
                p1.setTotal(p1.getTotal()+pickp1);
                cout << "Coin's left to pick: 3. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp1;
                if(pickp1 == 3){
                    p1.setTotal(p1.getTotal()+pickp1);
                    cout << "You picked your coins. Player 2 turn."<< endl;
                    pickp1 = 0;
                }
            }
            else if (pickp1 == 3){
                p1.setTotal(p1.getTotal()+pickp1);
                cout << "Coin's left to pick: 1. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp1;
                if (pickp1 == 1){
                    p1.setTotal(p1.getTotal()+pickp1);
                    cout << "You picked your coins. Player 2 turn."<< endl;
                    pickp1 = 0;
                }
            }
            
        } 
        //PLAYER2 PICK
        cout << "Player 2 is picking: ";
        cin >> pickp2;

        if (pickp2 != 1 && pickp2 != 3 && pickp2 != 5){
            cout << "You dont play by rules, you are boring goodbye." << endl;
            break;
        }

        if (pickp2 == 1){
            p2.setTotal(p2.getTotal()+pickp2);
            cout << "Coin's left to pick: 3, 5. Enter to 0 finish your turn, or pick more coins: ";
            cin >> pickp2;
            if (pickp2 == 3)
            {
                p2.setTotal(p2.getTotal()+pickp2);
                cout << "Coin's left to pick: 5. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp2;
                if(pickp2 == 5){
                    p2.setTotal(p2.getTotal()+pickp2);
                    cout << "You picked your coins. Guessing time!"<< endl;
                    pickp2 = 0;
                }
            }
            else if (pickp2 == 5){
                p2.setTotal(p2.getTotal()+pickp2);
                cout << "Coin's left to pick: 3. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp2;
                if (pickp2 == 3){
                    p2.setTotal(p2.getTotal()+pickp2);
                    cout << "You picked your coins. Guessing time!"<< endl;
                    pickp2 = 0;
                }
            }
            
        }   

       if (pickp2 == 3){
            p2.setTotal(p2.getTotal()+pickp2);
            cout << "Coin's left to pick: 1, 5. Enter to 0 finish your turn, or pick more coins: ";
            cin >> pickp2;
            if (pickp2 == 1)
            {
                p2.setTotal(p2.getTotal()+pickp2);
                cout << "Coin's left to pick: 5. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp2;
                if(pickp2 == 5){
                    p2.setTotal(p2.getTotal()+pickp2);
                    cout << "You picked your coins. Guessing time!"<< endl;
                    pickp2 = 0;
                }
            }
            else if (pickp2 == 5){
                p2.setTotal(p2.getTotal()+pickp2);
                cout << "Coin's left to pick: 1. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp2;
                if (pickp2 == 1){
                    p2.setTotal(p2.getTotal()+pickp2);
                    cout << "You picked your coins. Guessing time!"<< endl;
                    pickp2 = 0;
                }
            }
            
        }  
    
        if (pickp2 == 5){
            p2.setTotal(p2.getTotal()+pickp2);
            cout << "Coin's left to pick: 1, 3. Enter to 0 finish your turn, or pick more coins: ";
            cin >> pickp2;
            if (pickp2 == 1)
            {
                p2.setTotal(p2.getTotal()+pickp2);
                cout << "Coin's left to pick: 3. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp2;
                if(pickp2 == 3){
                    p2.setTotal(p2.getTotal()+pickp2);
                    cout << "You picked your coins. Guessing time!"<< endl;
                    pickp2 = 0;
                }
            }
            else if (pickp2 == 3){
                p2.setTotal(p2.getTotal()+pickp2);
                cout << "Coin's left to pick: 1. Enter to 0 finish your turn, or pick more coins: ";
                cin >> pickp2;
                if (pickp2 == 1){
                    p2.setTotal(p2.getTotal()+pickp2);
                    cout << "You picked your coins. Guessing time!"<< endl;
                    pickp2 = 0;
                }
            }
            
        } 
        //guessing

        cout << "Player 1 is guessing, how many coins does Player 2 have in total?: ";
        cin >> guessP1;

        if (guessP1 == p2.getTotal()){
            cout << "Correct!" << endl;
            p1.setGP(p1.getGP()+1);
            if (p1.getGP() == points)
            {
                cout << "Player 1 is winner!" << endl;
                break;
            }
        }else{cout << "nope" << endl;}

        cout << "Player 2 is guessing, how many coins does Player 1 have in total?: ";
        cin >> guessP2;

        if (guessP2 == p1.getTotal()){
            cout << "Correct!" << endl;
            p2.setGP(p2.getGP()+1);
            if (p2.getGP() == points)
            {
                cout << "Player 2 is winner!" << endl;
                break;
            }
        }else{cout << "nope!" << endl;}
        



    }
    
}
    

