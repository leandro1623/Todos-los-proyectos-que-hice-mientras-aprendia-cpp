#include<iostream>
#include<stdlib.h>
using namespace std;

//prototipos de funcion
void  putingDownDates();
void show();

//variables globales
char **dibujo;
int *filas=new int,*col=new int;

int main(){//main
	putingDownDates();//haciendo arbolito
	show();//mostrandolo
	
	//liberando memoria
	for(int i=0;i<*filas;i++){
		delete[] dibujo[i];
	}
	delete[] dibujo;
	delete filas,col;
	
	//fin
	cout<<endl;
	system("color 2");
	system("pause");
	return 0;
}//fin main

void putingDownDates(){//---------------------------------------algoritmo de un arbolito en una matriz----------------------------------------------------------------------------

	*filas=16;//filas de la matriz
	*col=21;//columnas de la matriz
	dibujo=new char*[*filas];//creando matriz dinamicas para filas
	for(int i=0;i<*filas;i++){
		dibujo[i]=new char[*col];//apuntando filas a columnas
	}	
	
	for(int i=0;i<*filas;i++){
		for(int j=0;j<*col;j++){
			*(*(dibujo+i)+j)='\0';//llenando la matriz de caracteres nulos
		}
}
	
	//olgoritmo que ubica las posiciones de un triangulo y la llena con lo que desees en una matriz-------------------------------------------------------------------------------
	int y=1,k=(*col/2);
	for(int i=0;i<*filas;i++){
		for(int j=0;j<y;j++){
			if(y<=20){//condicional que define el ancho del triangulo **(debe ser menor que columnas)**
			*(*(dibujo+i)+(k+j))='*';//llenando la matriz de carecteres los caracteres deseados en las siguientes posiciones para formar un triangulo 
			}
		}
		y+=2;//aumentando y para dar el orden necesario al triangulo
		k--;//disminuyendo k para que por cada fila sea mas ancho que la anterior
		cout<<endl;
	}
	
	//algoritmo que ubica las tres posiciones centrales debajo del triangulo ejemplo:  **(pos_central-1,pos_central,pos_central+1)**  y los llena con asteriscos------------------
	int xfila=10,xcol=(*col/2)-1;//variables
	for(int i=0;i<*filas;i++){//iterador
		xcol=(*col/2)-1;//refrescando la pocicion centran de columna por cada fila que aumente en 1 
		for(int j=0;j<3;j++){//iterador que se repetira tres veces 
			if(xfila<13){//condicional que limita que tan hacia abajo se llenaaran de asteriscos
			*(*(dibujo+xfila)+xcol)='#';//llenando las posiciones ubicadas con un caracter deseado
			xcol++;//aumentando xcol
			}
		}
		xfila++;//aumentando xfilas
	}
	
	for(int j=0;j<*col;j++){//haciendo el suelo del arbol
		*(*(dibujo+13)+j)='-';
	}
	
	//fin algoritmo
//-----------------------------------------------------------------------------------------------(    hecho por ~~ Leandro Brito Contreras ~~    )--------------------------------
}

void show(){//mostrando matriz
	cout<<"                      ~*~*~*~*ARBOLITO DE NAVIDAD~*~*~*~*~*\n\n";
	for(int i=0;i<*filas;i++){
		cout<<"                           ";
		for(int j=0;j<*col;j++){
			cout<<*(*(dibujo+i)+j);
		}
		cout<<endl;
	}
}