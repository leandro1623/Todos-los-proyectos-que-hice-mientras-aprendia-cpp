#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

void aggPila(Nodo *&,char);
void sacarPila(Nodo *&,char&);

Nodo *pila=NULL;

int main(){
	char dato,band;
	do{
	cout<<"Digite una letra: ";cin>>dato;//pidiendo letra
	aggPila(pila,dato);//agregando letra a pila
	cout<<"\nDesea agregar mas letras (S/N): ";cin>>band;//por si quere agregar mas datos
	strupr(&band);//combirtiendo band a mayusculas
	}while(band=='S');//bucle 
	
	cout<<"\nDesea mostrar todos los datos (S/N): ";cin>>band;
	strupr(&band);//combirtiendo band a mayusculas
	if(band=='S'){
		cout<<"\nMostrando datos\n";
		while (pila != NULL){
			sacarPila(pila,dato);//sacando datos
			cout<<dato;//mostrando dato
		}
	}
	
	//fin
	delete pila;
	getch();
	return 0;
}

void aggPila(Nodo *&pila,char dato){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=dato;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
}

void sacarPila(Nodo *&pila,char& dato){
	Nodo *aux=pila;
	dato=aux->dato;
	pila=aux->siguiente;
	delete aux;
}