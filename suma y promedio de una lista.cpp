#include<iostream>
#include<stdlib.h>

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos
void menu();
void insertar_lista(Nodo *&,int);
void suma_y_promedio_de_los_elementos_de_la_lista(Nodo *lista);
float calcular_promedio(float,float);

Nodo *lista=NULL;

int main(){
	menu();
}

//inserta un elemento en la lista
void insertar_lista(Nodo *&lista,int dato){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=dato;
	
	Nodo *aux1=lista,*aux2;
	while((aux1!=NULL) && (aux1->dato < dato)){
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
	std::cout<<"\tElemento ingresado en la lista\n\n";
}

//menu del programa 
void menu(){
	char opc;
	int dato;
	do{
		system("cls");
		std::cout<<"\t.:MENU:.\n";
		std::cout<<"\n1. Ingresar un elemento en la lista";
		std::cout<<"\n2. Ver la suma y promedio de los elementos de la lista";
		std::cout<<"\n3. Salir";
		std::cout<<"\nDiguite una opcion: ";std::cin>>opc;
		
		switch(opc){
			case '1': std::cout<<"\nDigite un numero: ";std::cin>>dato;insertar_lista(lista,dato);system("pause");break;
			case '2': suma_y_promedio_de_los_elementos_de_la_lista(lista);system("pause");break;
			case '3': std::cout<<"\t~~PROGRAMA FINALIZADO~~\n";break;
			default : std::cout<<"\n**OPCION INCORRECTA**";
		}

	}while(opc!='3');
}

//calcular suma de los elementos de una lista
void suma_y_promedio_de_los_elementos_de_la_lista(Nodo *lista){
	if(lista==NULL){
		std::cout<<"\n**LA LISTA ESTA VACIA**\n\n";
	}
	else{
		float suma=0,cont=0;
		while(lista!=NULL){
			cont+=1;
			suma+=lista->dato;
			lista=lista->siguiente;
		}
		std::cout<<"\nLa suma de todos los elementos de la lista es: "<<suma<<"\n";
		std::cout<<"\nEl promeddio es: "<<calcular_promedio(suma,cont)<<"\n\n";
	}
	
}

//calcula el promedio de la lista
float calcular_promedio(float suma,float cont){
	float promedio;
	promedio=suma/cont;
	return promedio;
}