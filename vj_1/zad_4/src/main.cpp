#include <iostream>
using namespace std;

int vracanje_najveceg(int a,int b){
	if (a>b)
	{
		return a;
	}else return b;
}

int vracanje_najmanjeg(int a,int b){
	if (a<b)
	{
		return a;
	}else return b;
}


int min_broj_rekurzija(int niz[], int duljina)
{
     if (duljina == 0){
         return niz[0];
		 }
     return vracanje_najmanjeg(niz[duljina - 1], min_broj_rekurzija(niz,duljina-1));
 }

 int max_broj_rekurzija(int niz[], int duljina)
{
     if (duljina == 0){
         return niz[0];
		 }
     return vracanje_najveceg(niz[duljina - 1], min_broj_rekurzija(niz,duljina-1));
 }

int main() {
    
    int niz[] = {1,2,3,4,-1,6,7};
 	int duljina = sizeof(niz)/sizeof(niz[0]);

    int final_min = min_broj_rekurzija(niz, duljina);
	int final_max = max_broj_rekurzija(niz, duljina);

	std::cout << "najmanji: "<<final_min << endl;
	std::cout << "najmanji: "<<final_max << endl;

	return 0;
}
