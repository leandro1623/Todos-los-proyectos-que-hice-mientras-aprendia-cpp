#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos de funcion
void insertarNodo(Nodo *&,int);
void sacarNodo(Nodo *&,int&);

Nodo *siguiente=NULL;

int main(){
	int n,dato;
	std::cout<<"Cuantos numeros va a ingresar: ";
	std::cin>>n;
	std::cout<<"\nDigite los elementos: \n";
	
	for(int i=0;i<n;i++){//guardar dato en pila
		std::cin>>dato;
		insertarNodo(siguiente,dato);//insertando dato en la pila
	}
	
	std::cout<<"\nMostrando datos\n";
	while(siguiente!=NULL){
		sacarNodo(siguiente,dato);
		std::cout<<dato<<std::endl;
	}
	
	//fin
	system("pause");
	return 0;
}

void insertarNodo(Nodo *&siguiente,int dato){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=dato;
	nuevo_nodo->siguiente=siguiente;
	siguiente=nuevo_nodo;
}

void sacarNodo(Nodo *&siguiente,int& dato){
	Nodo *aux=siguiente;
	dato=aux->dato;
	siguiente=aux->siguiente;
	delete aux;
}