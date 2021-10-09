#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int a,b,aux;
	
	//entrada 
	
	cout<<"\nIngrese el primer valor: ";cin>>a;
	cout<<"\nIngrese el segundo valor: ";cin>>b;
	
	//salida1
	
	cout<<"\n\nPrimer valor antes= "<<a;
	cout<<"\n\nSegundo valor antes= "<<b;
	
	//operaciones
	 
	aux=a;
	a=b;
	b=aux;
	cout<<"\n\n-----------------------------------------------------------------------------";
	
	//salida2
	
	cout<<"\n\nPrimer valor ahora= "<<a;
	cout<<"\n\nSegundo valor ahora= "<<b;
	
	getch();
	return 0;
}
