#include <iostream>
using namespace std;

int min_broj_u_nizu (int niz[],int duljina_niza){
	int min = niz[0];

	for (int i = 0; i < duljina_niza; i++)
	{
		if (min > niz[i]){
			min=niz[i];
		}
	};
	return min;
	};

int max_broj_u_nizu(int niz[],int duljina_niza){
	int max = niz[0];

	for (int i = 0; i < duljina_niza; i++){
		if (max < niz[i]){
			max=niz[i];
		}	
	}
	return max;
	};


int main()
{
	int niz[] = {7,1133,22,2222,11,55,2021,-2012};
	int duljina_niza = sizeof(niz) / sizeof(niz[0]);

	int minimalan_broj = (min_broj_u_nizu(niz,duljina_niza));
	int maximalan_broj = (max_broj_u_nizu(niz,duljina_niza));

	std::cout<<"Min: "<<minimalan_broj<<::endl;
	std::cout<<"Max: "<<maximalan_broj<<::endl;

	
}