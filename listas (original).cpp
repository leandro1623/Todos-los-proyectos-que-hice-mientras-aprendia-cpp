#include<iostream>
#include<stdlib.h>

struct Nodo{
	char dato;
	Nodo *siguiente;
};

//prototipos de funcion
void menu();
void insertar_lista(Nodo *&,char);
void mostrar_lista(Nodo *);
void buscar_elemento(Nodo *,char);
void eliminar_elemento(Nodo *&,char);
void vacear_lista(Nodo *);

Nodo *lista=NULL;//lista principal

int main(){
	menu();
}

//menu
void menu(){
	char opc,dato;
	do{
		system("cls");
		system("color 72");
		std::cout<<"\n\t Elija una opcion\n";
		std::cout<<"\n1. Ingresar un caracter";
		std::cout<<"\n2. Mostrar la lista";
		std::cout<<"\n3. Buscar un elemento en la lista";
		std::cout<<"\n4. Eliminar un elemento de la lista";
		std::cout<<"\n5. Eliminar todos los elementos de la lista";
		std::cout<<"\n6. Salir";
		std::cout<<"\nDigite una opcion: ";std::cin>>opc;
		
		switch(opc){
			case '1':	system("cls");system("color 71");std::cout<<"\nDigite un caracter: ";std::cin>>dato;insertar_lista(lista,dato);break;
			case '2': system("cls");system("color 70");std::cout<<"\n";mostrar_lista(lista);break;
			case '3':	system("cls");system("color 53");std::cout<<"\nDigite elemento a buscar: ";std::cin>>dato;buscar_elemento(lista,dato);break;
			case '4': system("cls");system("color 67");std::cout<<"\nDigite elemento a eliminar: ";std::cin>>dato;eliminar_elemento(lista,dato);break;
			case '5': system("cls");system("color 74");vacear_lista(lista);break;
			case '6': system("cls");system("color 81");std::cout<<"\n~~Programa finalizado~~\n\n";break;
			default : system("cls");std::cout<<"\n**OPCION INVALIDA**\n";break;
		}
		system("pause");
	}while(opc!='6');
	
}

//inserta dato a la lista
void insertar_lista(Nodo *&lista,char dato){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=dato;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < dato)){
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
	std::cout<<"\n\n~~Elemento agregado~~\n\n";
}

//muestra la lista
void mostrar_lista(Nodo *lista){
	if(lista!=NULL){
		Nodo *actual=lista;
		std::cout<<"\nLos elementos son: ";
		while(actual!=NULL){
			std::cout<<actual->dato<<" -> ";
			actual=actual->siguiente;
		}
		std::cout<<"\n\n";
	}
	else{
		std::cout<<"\n~~LA LISTA ESTA VACIA~~\n\n";
	}
}

//busca un elelmento de la lista
void buscar_elemento(Nodo *lista,char dato){
	bool band=false;
	Nodo *actual=lista;
	while((actual!=NULL) && (actual->dato<=dato)){
		if(actual->dato==dato){
			band=true;
		}
		actual=actual->siguiente;
	}
	
	if(band==true){
		std::cout<<"\n~~Dato encontrado~~\n\n";
	}
	else{
		std::cout<<"\n**El Dato NO existe**\n\n";
	}
}

//elimina un elemento de la lista
void eliminar_elemento(Nodo *&lista,char dato){
	if(lista!=NULL){
		Nodo *aux1=lista;
		Nodo *aux2=NULL;
		while((aux1!=NULL) && (aux1->dato!=dato)){
			aux2=aux1;
			aux1=aux1->siguiente;
		}
		
		if(aux1==NULL){
			std::cout<<"\n**El elemento no existe**\n\n";
		}
		else if(aux2==NULL){
			lista=aux1->siguiente;
			delete aux1;
			std::cout<<"\n~~Elemento eliminado de la lista~~\n\n";
		}
		else{
			aux2->siguiente=aux1->siguiente;
			delete aux1;
			std::cout<<"\n~~Elemento eliminado de la lista~~\n\n";
		}
	}
}

//elimina todos los elementos de la lista
void vacear_lista(Nodo *lista){
	if(lista==NULL){
		std::cout<<"\nLa lista esta vacia\n\n";
	}
	else{
		std::cout<<"\nElementos eliminados: ";
		while(lista!=NULL){
			Nodo *aux=lista;
			lista=aux->siguiente;
			std::cout<<aux->dato<<" -> ";
			delete aux;
		}
		std::cout<<"\n\n";
	}
}