#include<iostream>
#include<conio.h>
using namespace std;

//prototipos de funcion
void pedirDatos(int m[][100],int&,int&);
void consultarFila(int&,int&);
int menorElementofila(int m[][100],int&,int&,int&,int&);


//variables globales
int mtrz[100][100],nfilas,ncol,fila,menor=999;

int main(){
	
	pedirDatos(mtrz,nfilas,ncol);
	consultarFila(fila,nfilas);
	cout<<"\nEl menor elemento de la fila "<<fila<<" es: "<<menorElementofila(mtrz,nfilas,ncol,fila,menor);
	
	getch();
	return 0;
}

void consultarFila(int& fila,int& nfilas){//pide el numero de la fila a consultar
	
	cout<<"\nDigite el numero de la fila que desea consultar: ";cin>>fila;
	
	while(fila>nfilas-1){
		cout<<"\n**Usted a digitado un numero de filas incorrecto porfavor digite otro.**\n";
		cout<<"\nDigite el numero de la fila que desea consultar: ";cin>>fila;
	}
	
}

void pedirDatos(int m[][100],int& nfilas,int& ncol){//pedir los datos de la matriz
	cout<<"Digite el numero de filas: ";cin>>nfilas;
	cout<<"Digite el numero de columnas: ";cin>>ncol;
	
	//llenando matriz
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"\nDigite un numero ["<<i<<"]["<<j<<"]: ";cin>>mtrz[i][j];
		}
	}
	
	
}

int menorElementofila(int m[][100],int& nfilas,int& ncol,int& fila,int& menor){//devolvera el menor elemento de la fila consultada
	
	for(int i=0;i<nfilas;i++){//recorriendo matriz para verificar el menor elemento de la fila consultada
		for(int j=0;j<ncol;j++){
			if(i==fila){
				if(mtrz[i][j] < menor){
					menor=mtrz[i][j];
				}
			}
		}
	}
	
	return menor;
}