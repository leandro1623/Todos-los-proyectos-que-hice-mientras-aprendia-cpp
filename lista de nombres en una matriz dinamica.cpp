#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//prototipos de funcion
void takingDates();//tomando datos de la matriz
void guardandoNombres();//guardando nombres en matriz
void showingMatriz();//mostrando matriz

char **listNames,*nombre=new char[40];//matriz y vector
int *filas=new int,*columnas=new int,*bigName=new int;//filas y columnas

int main(){//main
	takingDates();//tomando datos de la matriz
	guardandoNombres();//guardando nombres en matriz
	showingMatriz();//mostrando matriz
	
	//libreando memoria
	for(int i=0;i<*filas;i++){
		delete[] listNames[i];
	}
	delete[] listNames,nombre;
	delete filas,columnas;
	//fin
	system("pause");
	return 0;
}//fin main

void takingDates(){//tomando datos de la matriz
	*columnas=40;//tamano de columnas predeterminado
	cout<<"Digite la cantidad de nombres que va a ingresar: ";cin>>*filas;//pidiendo numero de filas
	listNames=new char*[*filas];//creando matriz dinamica para filas
	for(int i=0;i<*filas;i++){
		listNames[i]=new char[*columnas];//apuntando a columnas
	}
	
}

void guardandoNombres(){//guardando nombres en matriz
	*bigName=0;//aqui se guardara el tamano del nombre mas grande de logitud
	for(int i=0;i<*filas;i++){
		fflush(stdin);//limpiando buffer
		cout<<i+1<<". Digite el nombre: ";cin.getline(nombre,40,'\n');//pidiendo los nombres 
			if(strlen(nombre)>*bigName){//if
				*bigName=strlen(nombre);//mayor tamano de nombre
			}//fin if
		for(int j=0;j<*columnas;j++){
			*(*(listNames+i)+j)=*(nombre+j);//guardando los nombres por filas
			*(nombre+j)='\0';
		}
	}
}

void showingMatriz(){//mostrando matriz
	
	cout<<"\nNombres: \n";
	for(int i=0;i<*filas;i++){//iterador para filas
		cout<<i+1<<". "; 
		for(int j=0;j<*bigName;j++){//iterador para columnas
			cout<<*(*(listNames+i)+j);//mostrando nombres
		}
		cout<<endl;//dando espacio a cada nombre
	}
}