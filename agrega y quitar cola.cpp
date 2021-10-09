#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos de funcion
void aggfila(Nodo *&,Nodo *&,int);
void quitarfila(Nodo *&,Nodo *&, int&);
bool cola_vacia(Nodo *);

Nodo *frente=NULL,*fin=NULL;

int main(){
	int n,x;
	cout<<"Cuantos numeros desea agregar: ";cin>>x;
	for(int i=0;i<x;i++){//agregando numeros a la fila
		cout<<"Digite un numero: ";
		cin>>n;
		aggfila(frente,fin,n);//funcion para agregarlos
	}
	

	while(frente!=NULL){//sacando numeros de la fila
		quitarfila(frente,fin,n);//funcion para sacar los numeros de la fila
		cout<<n<<endl;//imprimiendo numero
	}
	
	//fin
	cout<<endl;
	system("pause");
	return 0;
}

void aggfila(Nodo *&frente,Nodo *&fin,int dato){//agregando fila
	Nodo *nueva_fila=new Nodo();
	
	nueva_fila->dato=dato;
	nueva_fila->siguiente=NULL;
	
	if(cola_vacia(frente)){
		frente=nueva_fila;
		fin=nueva_fila;
	}
	else{
		fin->siguiente=nueva_fila;
	}
	fin=nueva_fila;	
}

bool cola_vacia(Nodo *frente){//comprobando si la fila esta vacia
	return (frente==NULL)? true:false;
}


void quitarfila(Nodo *&frente,Nodo *&fin, int &dato){//quitando fila
	dato=frente->dato;
	
	Nodo *aux=frente;
	frente=aux->siguiente;
	delete aux;
}