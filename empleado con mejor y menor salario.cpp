#include<iostream>
#include<conio.h>
using namespace std;

struct empleado{
	char nombre[30];
	int edad;
	char puesto[30];
	float salario;
}empleado[9999];

int main(){
	int nempleados,pos,pos2;
	float mSalario;
	cout<<"Cuantos empleados va a ingresar: ";cin>>nempleados;//solicitando numero de empleados
	for(int i=0;i<nempleados;i++){//solicitando datos del los empleados
		fflush(stdin);
		cout<<"\nEmpleado #"<<i+1<<"\n";
		cout<<"\nNombre: ";cin.getline(empleado[i].nombre,30,'\n');
		cout<<"\nEdad: ";cin>>empleado[i].edad;
		fflush(stdin);
		cout<<"\nPuesto: ";cin.getline(empleado[i].puesto,30,'\n');
		cout<<"\nSalario: ";cin>>empleado[i].salario;	
		if(empleado[i].salario>mSalario){//buscando el empleado con mejor salario
			mSalario=empleado[i].salario;
			pos=i;
		}
		if(empleado[i].salario<mSalario){//buscando el empleado con menor salario
			mSalario=empleado[i].salario;
			pos2=i;
		}
	}
	//mostrando el empleado con mejor salario
	cout<<"\n\n**Empleado con mejor salalrio**\n";
	cout<<"\nNombre: "<<empleado[pos].nombre;
	cout<<"\nEdad: "<<empleado[pos].edad;
	cout<<"\nPuesto: "<<empleado[pos].puesto;
	cout<<"\nSalario: "<<empleado[pos].salario;
	
	//mostrando el empleado con menor salario
	cout<<"\n\n**Empleado con menor salalrio**\n";
	cout<<"\nNombre: "<<empleado[pos2].nombre;
	cout<<"\nEdad: "<<empleado[pos2].edad;
	cout<<"\nPuesto: "<<empleado[pos2].puesto;
	cout<<"\nSalario: "<<empleado[pos2].salario;	
	//fin
	getch();
	return 0;
}