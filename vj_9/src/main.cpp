#include <iostream>
#include "player.hpp"
#include <cstdlib> 
#include <vector>
#include <ctime>
using namespace std;
#include "game.hpp"
#include "animal.hpp"
#include "brojac.hpp"
#include <string>


int main()
{	
	humanplayer p1,p2;
	computerPlayer c1,c2;
	game g1;
	int choice;

	stonoga stonoga1;
	orao velikiorao;
	crnaudovica blackwidow;

	brojac b1; 

	cout << "Please choose game you want to play: " << endl << "1.Japanež PvP" << endl << "2.Japanež Ai VS Ai" << endl << "3. Animal leg counter" << endl;
	cin >> choice;

	if(choice == 1){
		cout << "Welcome to Japanež PvP. " << endl;
		g1.gameStarterPvP(p1,p2);
	}
	else if(choice == 2){
		cout << "Welcome to Japanež PvP. Game will start soon" << endl;
		g1.gameStarterComputer(c1,c2);
	}
	else if(choice == 3){
		b1.setAnimal(stonoga1);
		b1.setAnimal(stonoga1);
		b1.setAnimal(velikiorao);
		b1.legcounter();
	}

	return 1;
}