#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	//creando el vector y varibles necesarias
	int num[100];
	int i,pos,aux,tam;
	
	//obteniendo el tamano del vector
	cout<<"Cuantos numeros usted va a ingresar: ";
	cin>>tam;
	
	//llenando vector
	for(i=0;i<tam;i++){
		cout<<"Digite un Numero: ";
		cin>>num[i];
	}
	
	//ordenando el vector 
	for(i=0;i<tam;i++){
		pos=i;
		aux=num[i];
		while((pos>0) && (num[pos-1]>aux)){
			num[pos]=num[pos-1];
			pos--;
		}
		num[pos]=aux;
	}
	
	//mostrando en vector
	cout<<"Orden asendente: ";
	for(i=0;i<tam;i++){
		cout<<num[i]<<" ";
	}
	
	cout<<"\nOrden desendente: ";
	for(i=tam-1;i>=0;i--){
		cout<<num[i]<<" ";
	}
	
	getch();
	return 0;
}
