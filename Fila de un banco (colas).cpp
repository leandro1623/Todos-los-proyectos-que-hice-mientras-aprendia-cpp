#include<iostream>
#include<stdlib.h>
using namespace std;

//estucturas
struct Persona{
	int n;
	char nombre[40];
	int edad;
	char cedula[15];
};

struct Nodo{
	Persona datos;
	Nodo *siguiente;
};

//prototipos de funcion
void takingDates();
void aggCola(Nodo *&,Nodo *&,Persona);
bool cola_vacia(Nodo *);
void quitarCola(Nodo *&,Nodo *&,Persona&);

Nodo *frente=NULL,*fin=NULL;
Persona datos;

int main(){//------------------------------main
	cout<<"\a";
	takingDates();
	cout<<"\a";
	//fin
	system("color 4");
	cout<<".:GRACIAS POR PREFERIRNOS:.\n\n";
	system("pause");
	return 0;
}//------------------------------------fin main

void takingDates(){
	int n,i=1;
	do{//do
	system("Color B");
		cout<<"\t\t.:MENU:.\n";
		cout<<"\n\t1. Ingresar persona";
		cout<<"\n\t2. Mostrar todas las personas";
		cout<<"\n\t3. Salir";
		cout<<"\n\t Elija una opcion: ";
		cin>>n;
		system("cls");
		switch(n){//switch
			case 1: fflush(stdin);
					system("color 1");
					cout<<"#"<<i;
					cout<<"\nDigite su nombre: ";cin.getline(datos.nombre,40,'\n');//nombre de la persona
					cout<<"\nDigite su edad: ";cin>>datos.edad;//edad
					fflush(stdin);
					cout<<"\nIngrese su cedula: ";cin.getline(datos.cedula,15,'\n');//cedula
					datos.n=i;
					i++;
					aggCola(frente,fin,datos);
					system("cls");
					break;
					
			case 2:	cout<<"\n.:MOSTRANDO DATOS:.\n";
					system("color 5");
					while(frente!=NULL){
						quitarCola(frente,fin,datos);
						fflush(stdin);
						cout<<"#"<<datos.n;
						cout<<"\nNombre: "<<datos.nombre;
						cout<<"\nEdad: "<<datos.edad;
						cout<<"\nCedula: "<<datos.cedula;
						cout<<"\n\n";
					}
					system("pause");
					system("cls");
					break;
					
			case 3:break;
			
			default: cout<<"\nOpcion incorrecta\n";
		}//fin switch
	}while(n!=3);//fin do while
	
}

void aggCola(Nodo *&frente,Nodo *&fin,Persona datos){//insertando cola
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->datos=datos;
	nuevo_nodo->siguiente=NULL;
	
	if(cola_vacia(frente)){
		frente=nuevo_nodo;
		fin=nuevo_nodo;
	}
	else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
}

bool cola_vacia(Nodo *frente){//verificando si cola esta vacia
	return (frente==NULL)? true:false;
}

void quitarCola(Nodo *&frente,Nodo *&fin,Persona &datos){//sacando cola
	datos=frente->datos;

	Nodo *aux=frente;
	
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	}
	else{
		frente=frente->siguiente;
	}

	delete aux;
}