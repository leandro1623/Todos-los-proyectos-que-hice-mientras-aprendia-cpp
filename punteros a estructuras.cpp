#include<iostream>
#include<stdlib.h>
using namespace std;

struct Tiempo{
	int horas;
	int minutos;
	int segundos;
}tiempo,*postiempo=&tiempo;

//prototipos de funcion
void pedirDatos(Tiempo *);
void mostrarDatos(Tiempo *);

int main(){//main
	pedirDatos(postiempo);
	
	//fin
	system("Pause");
	return 0;
}//main

void pedirDatos(Tiempo *postiempo){//pidiendo datos
	cout<<"Digite las horas: ";cin>>(postiempo)->horas;
	cout<<"Digite las minutos: ";cin>>(postiempo)->minutos;
	cout<<"Digite las segundos: ";cin>>(postiempo)->segundos;
	
	mostrarDatos(postiempo);//funcion mostrar datos	
}

void mostrarDatos(Tiempo *postiempo){//mostrando datos
	cout<<postiempo->horas<<":"<<postiempo->minutos<<":"<<postiempo->segundos<<endl;//mostrando datos

}