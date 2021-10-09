#include<iostream>
#include<conio.h>
using namespace std;

struct promedio{
	int cantNotas;
	float notas[999];
}promedio;

struct alumno{
	char nombre[40];
	int edad;
	float promedio;
}alumno[3];

float promedioAlumno(float notas[],int& tam);

int main(){
	float mejorprom=0.0;
	int posPromedio;//variables para sacar el mejr promedio
	cout<<"\nCuantas notas por alumno va a digitar *DIGITAR TODAS LAS NOTAS DE 0-10 O DE 0-100 COMO USTED DESEE*: ";cin>>promedio.cantNotas;//cuantas notas tendra cada alumno
	for(int i=0;i<3;i++){//pidiendo datos de cada alumno
		fflush(stdin);//vaceando buffer
		cout<<"\nAlumno #"<<i+1<<"\n";
		cout<<"\nNombre: ";cin.getline(alumno[i].nombre,40,'\n');
		cout<<"\nEdad: ";cin>>alumno[i].edad;
		alumno[i].promedio=promedioAlumno(promedio.notas,promedio.cantNotas);//sacando promedio de cada alumno
		if(alumno[i].promedio>mejorprom){//buscando el mejor promedio
			mejorprom=alumno[i].promedio;
			posPromedio=i;//obteniendo la posicion del mejor promedio
		}
	}
		cout<<"\n**El alumno con el mejor promedio**\n";//publicndo datos del alumno con mejor promedio
		cout<<"\nNombre: "<<alumno[posPromedio].nombre;
		cout<<"\nEdad: "<<alumno[posPromedio].edad;
		cout<<"\nPromedio: "<<alumno[posPromedio].promedio;//mejor promedio
		
		cout<<"\n\n--Los otros alumnos--\n";//mostrando los datos de los demas alumnos
		for(int i=0;i<3;i++){
			if(i!=posPromedio){
				cout<<"\n\nAlumno #"<<i+1<<"\n";
				cout<<"\nNombre: "<<alumno[i].nombre;
				cout<<"\nEdad: "<<alumno[i].edad;
				cout<<"\nPromedio: "<<alumno[i].promedio;
			}
		}
		
		
	//fin
	getch();
	return 0;
}


float promedioAlumno(float notas[],int& tam){
	float prom=0;
	
	for(int i=0;i<tam;i++){
		cout<<"\nDigite la nota "<<i+1<<" : ";cin>>notas[i];
		prom+=notas[i];
	}
	prom/=tam;
	
	return prom;
}