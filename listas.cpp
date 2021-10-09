#include<iostream>
#include<stdlib.h>

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos de funcion
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);

Nodo *lista=NULL;

int main(){
	menu();
}

//menu
void menu(){
	int opc,n;
	do{
		std::cout<<"1. Insertar lista";
		std::cout<<"\n2. mostrar lista";
		std::cout<<"\n3. salir";
		std::cout<<"\nDigite opcion: ";
		std::cin>>opc;
		
		switch(opc){
			case 1: std::cout<<"Digite un numero: ";std::cin>>n;
					insertarLista(lista,n);
					std::cout<<"\n";
					system("pause");
					break;
			case 2: mostrarLista(lista);std::cout<<"\n";system("pause");break;
		}
		system("cls");
	}while(opc!=3);
	
}

//insertar lista
void insertarLista(Nodo *&lista,int dato){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=dato;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1!=NULL) && (aux1->dato < dato)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista==aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	
	nuevo_nodo->siguiente=aux1;
	
}

//mostrar lista
void mostrarLista(Nodo *lista){
	Nodo *actual=new Nodo();
	
	actual=lista;
	while(actual!=NULL){
		std::cout<<actual->dato<<"\n";
		actual=actual->siguiente;
	}
	
}



