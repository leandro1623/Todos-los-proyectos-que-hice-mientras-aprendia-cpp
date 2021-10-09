/*La calificación final de un estudiante es el promedio de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y
la nota de participación que cuenta el 10% restante.
Escriba un programa que lea las tres notas del alumno y escriba su nota final.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	float ntpractica,ntTeorica,ntparticipacion,ntfinal;
	
	cout<<"\n\nIngrese la nota de practicas: ";cin>>ntpractica;
	cout<<"\n\nIngrese la nota teorica: ";cin>>ntTeorica;
	cout<<"\n\nIngrese la nota de participacion: ";cin>>ntparticipacion;
	
	ntpractica *= 0.30;
	ntTeorica *= 0.60;
	ntparticipacion *=0.10;
	ntfinal += ntpractica+ntTeorica+ntparticipacion;
	
	cout<<"\n\nLa nota final es: "<<ntfinal;
	
	
	getch();
	return 0;
}
