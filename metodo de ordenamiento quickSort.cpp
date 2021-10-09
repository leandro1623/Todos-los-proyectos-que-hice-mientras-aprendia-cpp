#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(int&,int&);
void pedirDatos();
void quickSort(int vctr[],int&,int&);

int vctr[9999],primera=0,tam,ultima;

int main(){
	
	pedirDatos();
	quickSort(vctr,primera,ultima);
	
	for(int i=0;i<tam;i++){
		cout<<vctr[i]<<"|";
	}
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamano del vector: ";cin>>tam;
	ultima=tam-1;
	//llenando el vector
	for(int i=0;i<tam;i++){
		cout<<"\nDigite un numero: ";cin>>vctr[i];
	}
	
}

void quickSort(int vctr[],int& primera,int& ultima){
	int pivote,i,j,central;
															//4 2 1 3 5
															//0 1 2 3 4
	central=(primera + ultima)/2;
	pivote=vctr[central];
	i=primera;
	j=ultima;
	
	do{
		while(vctr[i]<pivote) i++; 
		while(vctr[j]>pivote) j--; 
		
		if(i<=j){
			intercambio(vctr[i],vctr[j]);
			i++;
			j--;
		}
		
	}while(i<=j);
	
	if(primera < j){
		quickSort(vctr,primera,j);
	}
	if( i < ultima){
		quickSort(vctr,i,ultima);
	}
	
}

void intercambio(int& x,int& y){
	int aux;
	
	aux=x;
	x=y;
	y=aux;
	
}
