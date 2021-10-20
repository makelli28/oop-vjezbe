#include <iostream>
using namespace std;

//1. Napisati funkciju koja računa najveći i najmanji broj u nizu od n prirodnih
//brojeva. Funkcija vraća tražene brojeve pomoću referenci.



void najveci_najmanji(int* niz,int &najveci,int &najmanji,int duljina){
	int i=0;
	najveci=niz[i];
	najmanji=niz[i];
	
	for (; i < duljina; i++){	
		if(niz[i] < najmanji){
			najmanji = niz[i];
			cout<< "i je tretnno: " << i <<", minimum je "<< najmanji <<", a maximum je za sad " << najveci<<endl;}
		if(niz[i] > najveci){
			najveci = niz[i];
			cout<< "i je tretnno: "<< i <<", minimum je : "<< najmanji << ", a maximum je za sad " << najveci<<endl;}
		}
}

int main()
{
	int najveci=0;
	int najmanji=0;

	int niz[] = {1,2,3,4,5,6,-2};
	int niz_lenght = sizeof(niz) / sizeof(niz[0]);

	najveci_najmanji(niz,najveci,najmanji,niz_lenght);
	std::cout <<"Najmanji broj je: "<< najmanji << ", a najveci broj je: "<< najveci << endl;
}	