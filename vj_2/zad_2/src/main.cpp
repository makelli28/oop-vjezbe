#include <iostream>
using namespace std;
// Napisati funkciju koja vraća referencu na neki element niza. 
//Koristeći povratnu vrijednost funkcije kao lvalue uvećajte i-ti element niza za jedan.

// mijenja se vrijednos elementa bez reference
int& funkcija_zadatak2(int* niz, int duljina_niza,int unos){
	for (int i = 0; i < duljina_niza; i++)
	{
		if (i == unos){
			niz[i] += 1;
		}
	}

}

int niz_global [] = {2,4,6,8,10};
int& vrati_referencu_na_element(int uneseni_index_koji_povecavamo){
	return niz_global[uneseni_index_koji_povecavamo];

}


int main()
{
	int niz[]={1,2,3,4,5,6};
	int duljina= sizeof(niz)/sizeof(niz[0]);
	int (&ref)[6] =niz ;
	int unos=0;

	cout<<"Indeks broja koji zelis uvecat za 1 : "<<endl;
	std::cin>> unos;

	cout<<"Element na mjestu 'unos': "<<niz_global[unos]<<endl;
	vrati_referencu_na_element(unos) +=1;
	cout<<"Element na mjestu 'unos' nakon izvršene fukncije: "<<niz_global[unos]<<endl;

//bez reference
	funkcija_zadatak2(niz,duljina,unos);
	 for (int  i = 0; i < duljina; i++)
	{
	 	cout<<"i je trenutno : "<< i <<" a niz[i]: "<<niz[i]<<endl;
	}
}