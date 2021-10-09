#include<iostream>
#include<stdlib.h>

//estructua Nodo
struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos de funcion
void ingresar_lista(Nodo *&,int);
void mayor_y_menor_elemento_de_la_lista(Nodo *); 

//lista
Nodo *lista=NULL;

int main(){//main
	char opc;
	int dato;
	do{
		system("cls");
		std::cout<<"\n1. ingresar elemento en la lista";
		std::cout<<"\n2. Mostrar el maayor y menor elemento en la lista";
		std::cout<<"\n3. Salir";
		std::cout<<"\nDigite opcion: ";std::cin>>opc;
		
		switch(opc){
			case '1': system("cls");std::cout<<"\nDigite un elemento: ";std::cin>>dato;ingresar_lista(lista,dato);break;
			case '2': system("cls");mayor_y_menor_elemento_de_la_lista(lista);break;
			case '3': system("cls");std::cout<<"\n**PROGRAMA FINALIZADO**\n\n";break;
			default : system("cls");std::cout<<"\n**OPCION INVALIDAD\n\n";break;
		}
		system("pause");
	}while(opc!='3');
	
}//fin main

//ingresa datos a la lista
void ingresar_lista(Nodo *&lista,int dato){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=dato;
	Nodo *aux1=lista,*aux2;
	while((aux1!=NULL) && (aux1->dato<dato)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(aux1==lista){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
	
}

//busca el mayor y el menor elemento de la lista dada
void mayor_y_menor_elemento_de_la_lista(Nodo *lista){
	if(lista==NULL){
		std::cout<<"\n**La lista esta vacia**\n\n";
	}
	else{
		int mayor,menor;
		mayor=0;
		menor=99999999;
		//buscando el mayor y menor elemento de la lista
		while(lista!=NULL){
			if(lista->dato >= mayor){
				mayor=lista->dato;
			}
			if(lista->dato <= menor){
				menor=lista->dato;
			}
			lista=lista->siguiente;
		}
		std::cout<<"\nEl mayor elemento de la lista es: "<<mayor<<"\n\n";
		std::cout<<"\nEl menor elemento de la lista es: "<<menor<<"\n\n";
	}
}