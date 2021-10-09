#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void llenarvctr_naleatorio(int vctr[],int&);
void pedirDatos();
void intercambio(int&,int&);
void ordenamientoShell(int vctr[],int&);

int vctr[999],tam;

int main(){
	pedirDatos();
	ordenamientoShell(vctr,tam);
	
	for(int i=0;i<tam;i++){
		cout<<vctr[i]<<"|";
	}
	
	cout<<endl;
	
	getch();
	return 0;
}


void pedirDatos(){
	cout<<"Digite el tamno el vector: ";cin>>tam;
	
	llenarvctr_naleatorio(vctr,tam);
	
}

void ordenamientoShell(int mtrz[],int& tam){
	int salto=tam/2;
	int i,k,j;
	
	while(salto>0){
		for(i=salto;i<tam;i++){
			j=i-salto;
			while(j>=0){
				k = j + salto;
				if(vctr[j]<=vctr[k]){
					j=-1;
				}
				else{
					intercambio(vctr[j],vctr[k]);
					j -= salto;
				}
			}
		}
		salto = salto/2;
	}
	
	
}

void intercambio(int& x,int& y){
	int aux;
	
	aux=x;
	x=y;
	y=aux;
}

void llenarvctr_naleatorio(int vctr[],int& tam){
	int dato;
	
	srand(time(NULL));
	for(int i=0;i<tam;i++){
		dato=1+rand()%(1000);
		vctr[i]=dato;
	}
}
