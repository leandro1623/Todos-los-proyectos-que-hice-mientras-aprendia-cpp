#include<iostream>
#include<conio.h>
using namespace std;

struct fecha{
	int dia,mes,ano;
}fecha1,fecha2;

//prototipo de funcion
void pedirDatos();
fecha masReciente(fecha,fecha);


int main(){
	pedirDatos();
	fecha x=masReciente(fecha1,fecha2);
	cout<<"\nLa fecha mas reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.ano<<endl;
	
	getch();
	return 0;
}

void pedirDatos(){
	do{
	cout<<"Digite de la primera fecha *Digite una fecha correcta*";
	cout<<"\n\nDia: ";cin>>fecha1.dia;
	cout<<"\nMes: ";cin>>fecha1.mes;
	cout<<"\nAño: ";cin>>fecha1.ano;
	}while((fecha1.dia>31) || (fecha1.mes>12) || (fecha1.ano>2021));
	
	do{
	cout<<"\nDigite de la segunda fecha *Digite una fecha correcta*";
	cout<<"\n\nDia: ";cin>>fecha2.dia;
	cout<<"\nMes: ";cin>>fecha2.mes;
	cout<<"\nAño: ";cin>>fecha2.ano;
	}while((fecha2.dia>31) || (fecha2.mes>12) || (fecha2.ano>2021));
	
}

fecha masReciente(fecha fecha1,fecha fecha2){
	
	if(fecha1.ano>fecha2.ano){//ano
		return fecha1;
	}
	else if(fecha1.ano<fecha2.ano){
		return fecha2;
	}
	else if(fecha1.mes>fecha2.mes){//mes
		return fecha1;
	}
	else if(fecha1.mes<fecha2.mes){
		return fecha2;
	}
	else if(fecha1.dia>fecha2.dia){//dia
		return fecha1;
	}
	else if(fecha1.dia<fecha2.dia){
		return fecha2;
	}
	
}