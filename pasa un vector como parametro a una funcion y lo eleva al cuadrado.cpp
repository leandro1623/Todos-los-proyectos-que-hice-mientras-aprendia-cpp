#include<iostream>
#include<conio.h>
using namespace std;

void llenarvector(int vec[],int);
void cuadrado(int vec[],int);
void mostrar(int vec[],int);

int main(){
	
	int tama;
	cout<<"Digite el tamano del vector: ";cin>>tama;
	const int tam=tama;
	int vec[tam];
	
	llenarvector(vec,tam);
	cuadrado(vec,tam);
	mostrar(vec,tam);
	
	getch();
	return 0;
}

void llenarvector(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<"\nDigite un numero: ";
		cin>>vec[i];
	}
}

void cuadrado(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]*=vec[i];
	}
}

void mostrar(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<"\n\n"<<vec[i]<<" ";	
	}
}