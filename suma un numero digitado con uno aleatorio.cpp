#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){
	
	int numero,dato,resultado;
	
	srand(time(NULL));
	dato = 1 + rand()%(100);
	
	cout<<"Digite un numero a sumar con el numero aleatorio: ";cin>>numero;
	resultado=numero+dato;
	
	cout<<"\n\tEl resultado es igual: "<<resultado;
	
	return 0;
}
