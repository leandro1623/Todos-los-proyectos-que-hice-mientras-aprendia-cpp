#include<iostream>
#include<stdlib.h>// new y delete
using namespace std;//para usar el cin y cout
struct Nodo{//estructura nodo
	char dato;
	Nodo *siguiente;
};

//protoipos de funcion
void menu();
void aggNodo(Nodo *&,Nodo *&,char);
bool cola_vacia(Nodo *);
void quitarNodo(Nodo *&,Nodo *&,char&);

Nodo *frente=NULL,*fin=NULL;//frente y fin
char dato;//dato

int main(){//main
	menu();//funcion menu
	delete frente,fin;//borrando espacion almacenado
	system("color 4");
	cout<<"**Gracias por preferirnos**\n\n";
	system("pause");
	return 0;
}//fin main

void menu(){//menu
	int opc;
	
	do{//do
	system("color 71");
		cout<<"1. Insertar dato";
		cout<<"\n2. Mostrar datos";
		cout<<"\n3. Salir\n";
		cout<<"\nElija una opcion: ";
		cin>>opc;
		system("cls");
	
		switch(opc){//switch
		
			case 1://insertar dato
				system("color 72");
				int n;
				cout<<"\nCuantas letras va a insertar: ";cin>>n;
				for(int i=0;i<n;i++){//for
					cout<<"Digite una letra: ";cin>>dato;
					aggNodo(frente,fin,dato);
				}//fin for
				dato=' ';
				aggNodo(frente,fin,dato);
				system("cls");
				break;//fin insertar datos
				
			case 2://mostrar los datos
			system("COLOR 86");
				cout<<"\nMostrando datos: ";
				while(frente!=NULL){//while
					quitarNodo(frente,fin,dato);
					if(frente!=NULL){//if
						cout<<dato<<", ";
					}
					else{
						cout<<dato<<".";
					}//fin if
				}//fin while
				cout<<"\n\n";
				system("pause");
				system("cls");
				break;//fin mostrar datos
				
			case 3:break;//salir
			default: cout<<"\nOpcion incorrecta digite otra \n";
		}//fin switch
		
	}while(opc!=3);//fin do while	
}//fin menu

void aggNodo(Nodo *&frente,Nodo *&fin,char dato){//insertando dato en la cola
	Nodo *nuevo_nodo=new Nodo();//creando espacio para almacenar el dato
	nuevo_nodo->dato=dato;//almacenando el dato
	nuevo_nodo->siguiente=NULL;
	
	if(cola_vacia(frente)){//verificando si es el primer elemento
		frente=nuevo_nodo;
		fin=nuevo_nodo;
	}
	else{//si no lo es
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
}

bool cola_vacia(Nodo *frente){//verificando si la cola esta vacia
	return (frente==NULL)? true:false;
}

void quitarNodo(Nodo *&frente,Nodo *&fin,char &dato){//quitando nodo del la cola
	dato=frente->dato;//tomando el dato de la cola
	Nodo *aux=frente;
	frente=aux->siguiente;//posicionando el frente
	delete aux;//borrando el dato obtenido
}