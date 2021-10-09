#include<iostream>
#include<conio.h>
using namespace std;


float definir_salarioNeto(float& sb);

struct persona{
	char nombre[40];
	int edad;
	char trabajo[40];
	float salarioBruto;
	float salarioNeto;
	
}persona[9999];

int nP;

int main(){
	cout<<"Cuantas personas va a ingresar: ";cin>>nP;
	
	//pidiendo datos
	for(int i=0;i<nP;i++){
			fflush(stdin);
		cout<<"\n**PERSONA**"<<i+1<<"\n\n";
		cout<<"Digite el nombre: ";cin.getline(persona[i].nombre,40,'\n');
		cout<<"\nDigite la edad: ";cin>>persona[i].edad;
			fflush(stdin);
		cout<<"\nDigite el puesto de trabajo: ";cin.getline(persona[i].trabajo,40,'\n');
		cout<<"\nDigite el salario bruto: ";cin>>persona[i].salarioBruto;
		persona[i].salarioNeto=definir_salarioNeto(persona[i].salarioBruto);
	}
	
	//mostrando datos
	for(int i=0;i<nP;i++){
		cout<<"\n\n**PERSONA**"<<i+1<<"\n\n";
		cout<<"Nombre: "<<persona[i].nombre;
		cout<<"\nEdad: "<<persona[i].edad;
		cout<<"\nPuesto de trabajo: "<<persona[i].trabajo;
		cout<<"\nSueldo bruto: "<<persona[i].salarioBruto;
		cout<<"\nSueldo neto: "<<persona[i].salarioNeto;
	}
	
	
	getch();
	return 0;
}

float definir_salarioNeto(float& sb){
	float sn,ars,afp,cooperativa,vacaciones,totalDescuento;
	
	ars=sb*(2.70/100);
	afp=sb*(2.50/100);
	cooperativa=sb*(1.7/100);
	vacaciones=sb*(3.14/100);
	totalDescuento=ars+afp+cooperativa+vacaciones;
	sn=sb-totalDescuento;
	
	return sn;
}