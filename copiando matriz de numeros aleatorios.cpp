#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){
	
	int matriz1[100][100], dato, filas, columnas;
	int matriz2[100][100];
	
	cout<<"digite el numero de filas: ";cin>>filas;
	cout<<"digite el numero de columnas: ";cin>>columnas;
	
	srand(time(NULL));
	
	//rellenando matriz1 de numeros aleatorios
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			dato = 1+rand()%(100);//numero aleatorio
			matriz1[i][j] = dato;
		}
	}
	
	//copiando matriz1 en matriz2
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
		cout<<"\nmostrando matriz#1\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nmostrando matriz#2\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
