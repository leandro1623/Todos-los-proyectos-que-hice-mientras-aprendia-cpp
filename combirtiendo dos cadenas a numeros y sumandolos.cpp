#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;


int main(){
	
	char entero[5],real[5];
	int entero2;
	float real2;
	
	cout<<"Digite un numero entero: ";
	cin.getline(entero,5,'\n');
	
	cout<<"Digite un numero real: ";
	cin.getline(real,5,'\n');
	
	entero2 = atoi(entero);
	real2 = atof(real);
	
	cout<<"\nLa suma es: "<<entero2+real2<<endl;
	
	getch();
	return 0;
}
