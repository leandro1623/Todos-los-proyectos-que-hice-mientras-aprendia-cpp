#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void menu();
void intercambio(int&,int&);
void ordenamientoShell(int vctr[],int&);



int vctr[9999],tam;

int main(){
	
	menu();
	ordenamientoShell(vctr,tam);
	
	cout<<"\n**Orden ascendente**\n\n";
	for(int i=0;i<tam;i++){
		cout<<vctr[i]<<"|";
	}
	
	cout<<endl;
	getch();
	return 0;
} 

void menu(){
	int res;
	do{
	cout<<"Digite el tamano del vector: ";cin>>tam;
	}while(tam<0);
	
	do{
	cout<<"\nComo desea llenar el vector.\n";
	cout<<"\n1.Lenarlo yo.";
	cout<<"\n2.Llenarlo de numeros aleatorios.";
	cout<<"\n\nDigite una opcion: ";
	cin>>res;
	cout<<endl;
	}while(res<1 || res>2);
	
	
	srand(time(NULL));
	switch(res){
		case 1:
			cout<<"\n **Usted eligio la opcion "<<res<<".**\n";
			for(int i=0;i<tam;i++){
				cout<<"\nDigite un numero: ";cin>>vctr[i];
			}
			break;
		case 2: 
			for(int i=0;i<tam;i++){
				int dato=1+rand()%(9999); 
				vctr[i]=dato;
			}
	}
	
}

void ordenamientoShell(int vctr[],int& tam){
	int salto,i,j,k;
	salto=tam/2;
	
	while(salto>0){
		for(int i=salto;i<tam;i++){
			j = i-salto;
			while(j>=0){
				k = j+salto;
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














