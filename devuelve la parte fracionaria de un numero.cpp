#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
float prtfracion(float x);

float numero,resultado;

int main(){
	pedirDatos();
	resultado=prtfracion(numero);
	cout<<"La parte fraccionaria de "<<numero<<" es: "<<resultado<<endl;

	
	getch();
	return 0;
}


void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
}
float prtfracion(float x){
	int aux=x;
	x -= aux; 
	return x;
}
