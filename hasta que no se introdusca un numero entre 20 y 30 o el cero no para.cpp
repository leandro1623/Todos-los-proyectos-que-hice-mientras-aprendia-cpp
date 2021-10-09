#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	
	int contador=0,guardado[contador];
	float valores,suma=0;
	
	do{
		cout<<"Introdusca un numero: ";cin>>valores;
		if((valores > 0) && (valores < 20) || (valores > 30)){
			suma += valores;
			guardado[contador] = valores;
			contador++;
		}
	}while((valores > 0) && (valores < 20) || (valores > 30));
	
	contador -= 1;
	
	cout<<"\n\tLos valores introducidos mayores que cero son: ";
	for(int i = 0; i <= contador; i++){
		cout<<guardado[i]<<", ";
	}
	
	cout<<"\n\n\tY la suma es: "<<suma;
	
	
	getch();
	return 0;
}
