/*6. Escriba un programa que lea las tres notas de un alumno y calcule la 
nota final media de dicho alumno*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	string nomalumno;
	float nota1,nota2,nota3,resltfinal;
	
	//entrada
	
	cout<<"Ingrese nombre del estudiante: ";cin>>nomalumno;
	cout<<"\nIngrese nota 1: ";cin>>nota1;
	cout<<"\nIngrese nota 2: ";cin>>nota2;
	cout<<"\nIngrese nota 3: ";cin>>nota3;
	
	//acciones 
	
	resltfinal=(nota1+nota2+nota3)/3;
	
	//salida
	
	cout<<"\n\nLa nota final es= "<<resltfinal;
	
	
	getch();
	return 0;
}
