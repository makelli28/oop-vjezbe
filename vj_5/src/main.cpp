#include "point.hpp"
#include "weapon.hpp"
#include "target.hpp"
#include <iostream>
#include <vector>
using namespace std; //zbog vectora

int low,high;

int main()
{
	//zadatak 1.
	Point p1, p2;

	std::cout << "Enter Lower Intervals"<< std::endl;
	std::cin >> low;
	std:: cout << "Enter higher interval" << std::endl;
	std::cin >> high;

	p1.setRandomValue(low,high);
	p2.setRandomValue(low,high);

	std::cout << "Print 2 dots: " << std::endl;
	std::cout << "X: "<< p1.getX() << ", Y: " << p1.getY() << ", Z: "<< p1.getZ() << std::endl;
	std::cout << "X: " << p2.getX() << ", Y: " << p2.getY() << ", Z: "<< p2.getZ() << std::endl;
	std::cout << "Distance between two dot's is: " << p1.distance2d(p2) << std::endl;

	//Zadatak 3 - targets 
	std::cout << std::endl;
	Target t1;
	std::cout << "Donja Liva tocka: (" << t1.GetDotLD_x() << "," << t1.GetDotLD_y() << "," << t1.GetDotLD_z()<<")"<<std::endl;
	std::cout << "Gornja Desna tocka: (" << t1.GetDotUR_x() << "," << t1.GetDotUR_y() << "," << t1.GetDotUR_z()<<")"<<std::endl;

	//zadatak 2 -test
	Weapon kalas,pozicija_metka;
	pozicija_metka.setz();
//	std::cout << "Weapon Position" << std::endl;
//	std::cout << "X: " << kalas.getx() << ", Y: " << kalas.gety() << ", Z: "<< kalas.getz() << std::endl;
//	std::cout << "weapon hit: "<< std::endl;
	p1.setZ(kalas.getz());
//	std::cout << "X: " << p1.getX() << " Y: " << p1.getY() << " Z: " << p1.getZ() << std::endl;
//	std::cout << std::endl;


	// final
	int numT;
	cout << "enter number of targets: " << endl;
	cin >> numT; // broj meta
	std::vector <Target> randst;
	std::vector <Point> randsp;
	int counterT =0;
	int counterB =0;
	//Bullethit random generating
	while (counterB < kalas.getFullClipSize()){
		pozicija_metka.Shoot();
		 if (kalas.getCurrentClipSize()==0){
			 cout << "Empty clip. Reloading..." << endl;
			 kalas.Reload();
			 break;
		 }
		 else{
			 Point bullehitpoint;
			 bullehitpoint.setRandomValue(low,high);
			 bullehitpoint.setZ(kalas.getx());
			 randsp.push_back(bullehitpoint);
		 }
		 counterB++;
	}

		for (int i = 0; i < kalas.getFullClipSize() ; i++){
		cout <<"Bulle hit: "<< i+1 <<endl;
		cout << "Lower dot: X: " << randsp.at(i).getX() << endl;
		cout << "Lower dot: y: " << randsp.at(i).getY() << endl;
		cout << "Lower dot: z: " << randsp.at(i).getZ() << endl;
		
		}


	//Target randomTargets;
	cout  << endl;
	cout << "Targets!" << endl;
	while(counterT < numT){
		Target randomTargets;
		randst.push_back(randomTargets);
		counterT++;
	}

	for (int i = 0; i < numT ; i++){
		cout <<"dot: "<< i+1 <<endl;
		cout << "Lower dot: X: " << randst.at(i).GetDotLD_x() << endl;
		cout << "Lower dot: y: " << randst.at(i).GetDotLD_y() << endl;
		cout << "Lower dot: z: " << randst.at(i).GetDotLD_z() << endl;
		cout << "Upper dot X : " << randst.at(i).GetDotUR_x() << endl;
		cout << "Upper dot y : " << randst.at(i).GetDotUR_y() << endl;
		cout << "Upper dot z : " << randst.at(i).GetDotUR_z() << endl;
	}

	int targetHitCounter = 0;
	for(int j = 0 ; j < kalas.getFullClipSize(); j++){
		for (int k = 0; k < numT ; k++){
			int x1,y1,z1,x2,y2,z2,swaptemp;
			x1 = randst.at(k).GetDotLD_x();
			y1 = randst.at(k).GetDotLD_y();
			z1 = randst.at(k).GetDotLD_z();
			x2 = randst.at(k).GetDotUR_x();
			y2 = randst.at(k).GetDotUR_y();
			z2 = randst.at(k).GetDotUR_z();

		if(x1 > x2){
	 		swaptemp = x1;
	 		x1 = x2;
	 		x2 = swaptemp;
	 	}
	 	if(y1 > y2){
	 		swaptemp = y1;
	 		y1 = y2;
	 		y2 = swaptemp;
	 	}
	 	if(z1 > z2){
	 		swaptemp = z1;
	 		z1 = z2;
	 		z2 = swaptemp;
	 	}
			
			if(randsp.at(j).getZ() >= z1 and randsp.at(j).getZ() <= z2){
	 		if (randsp.at(j).getX() >= x1  and randsp.at(j).getX() <= x2 and randsp.at(j).getY() >= y1 and randsp.at(j).getY() <= y2)
	 		{
	 			cout << "hit" << endl;
				 targetHitCounter++;
	 		}
	 		else {cout << "miss" << endl;}
		}else {cout << "oruzje nije u visini mete"<<endl;}
	}
	}

cout << "Jednim punjenjem poođeno je: " << targetHitCounter << " meta" << endl;
	//mozda - jednim punjenjem gađam mete , reloadam , i gađam sve dok se sve mete ne pogode
	// while(counterT < numT){
		
	// 	Point bulletHit;

	// 	bulletHit.setRandomValue(low,high);
	// 	bulletHit.setZ(kalas.getz());
		
	// 	int x1,y1,z1,x2,y2,z2,swaptemp;
	// 	x1 = randomTargets.GetDotLD_x();
	// 	y1 = randomTargets.GetDotLD_y();
	// 	z1 = randomTargets.GetDotLD_z();
	// 	x2 = randomTargets.GetDotUR_x();
	// 	y2 = randomTargets.GetDotUR_y();
	// 	z2 = randomTargets.GetDotUR_z();		

	// 	if(x1 > x2){
	// 		swaptemp = x1;
	// 		x1 = x2;
	// 		x2 = swaptemp;
	// 	}
	// 	if(y1 > y2){
	// 		swaptemp = y1;
	// 		y1 = y2;
	// 		y2 = swaptemp;
	// 	}
	// 	if(z1 > z2){
	// 		swaptemp = z1;
	// 		z1 = z2;
	// 		z2 = swaptemp;
	// 	}
	// 	if(bulletHit.getZ() >= z1 and bulletHit.getZ() <= z2){
	// 		if (bulletHit.getX() >= x1  and bulletHit.getX() <= x2 and bulletHit.getY() >= y1 and bulletHit.getY() <= y2)
	// 		{
	// 			cout << "hit" << endl;
	// 		}
	// 		else {cout << "miss" << endl;}
	// 	}
	// 	//std::cout << "Donja Liva tocka: (" << randomTargets.GetDotLD_x() << "," << randomTargets.GetDotLD_y() << "," << randomTargets.GetDotLD_z()<<")"<<std::endl;
	// 	// std::cout << "Gornja Desna tocka: (" << randomTargets.GetDotUR_x() << "," << randomTargets.GetDotUR_y() << "," << randomTargets.GetDotUR_z()<<")"<<std::endl;
	// 	// std::cout << endl;
	// 	// std::cout << "Bullet hit: " <<  "X: " << bulletHit.getX() << " Y: " << bulletHit.getY() << " Z: " << bulletHit.getZ() << std::endl;

	
	// 	counterT++;
	// 	randst.push_back(bulletHit);
	// }

	// for (int i = 0; i < numT; i++){
	// 	cout << randst.at(i).getX()<<endl;
	// }

	// while (counterB < kalas.getFullClipSize())
	// {
	// 	Point bulletHit;
	// 	bulletHit.setRandomValue(low,high);
	// 	bulletHit.setZ(kalas.getz());
	// 	std::cout << "Bullet hit: " <<  "X: " << bulletHit.getX() << " Y: " << bulletHit.getY() << " Z: " << bulletHit.getZ() << std::endl;
	// 	counterB++;
	// }
	

	// int counter=0;
	// while(1){
	// 	int a;
		
	// 	std::cout << "For shooting press 1, for reloading press 0" << std::endl;
	// 	std::cin >> a;

	// 	if (a == 0)
	// 	{
	// 		kalas.Reload();
	// 		std::cout << "Reloading..." << std::endl;
	// 		counter = 0;
	// 	}

	// 	else{
	// 		kalas.Shoot();
	// 		std::cout << "choot!" << std::endl;
	// 		counter++;
	// 		if (counter == kalas.getFullClipSize())
	// 		{
	// 			break;
	// 		}
	// 	}
	// }
}