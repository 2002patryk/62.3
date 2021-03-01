#include <iostream>
#include <fstream>
using namespace std;

void wczytaj()
{
	int tab1[1000];
	int tab2[1000];
	int same=0;
	int wieksze=0;
	
	fstream plik1("liczby1.txt");
	fstream plik2("liczby2.txt");
	
	for(int i=0; i<1000; i++)
	{
		plik1>>oct>>tab1[i];
	}
	
	for(int i=0;i<1000;i++)
	{
		plik2>>dec>>tab2[i];
	}
	plik1.close();
	plik2.close();
	
	for(int i=0;i<1000;i++)
	{
	
	if(tab1[i]==tab2[i])
	{
		same++;
	}
	
	if(tab1[i]>tab2[i])
	{
		wieksze++;
	}

	}
	cout <<"Takie same: "<< same<<"\n";
	cout <<"Wieksze: " <<wieksze;
}


int main() 
{
	wczytaj();
	return 0;
}
