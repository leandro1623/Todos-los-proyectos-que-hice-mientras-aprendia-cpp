#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
	char nombre[30];
	int edad;
};

struct gpersonas{
	struct persona p1,p2,p3;
}gp1;

void pedirDatos();
void mayor(gpersonas);

int main(){
	pedirDatos();
	mayor(gp1);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Primera persona";
	cout<<"\n\nNombre: ";cin.getline(gp1.p1.nombre,30,'\n');
	cout<<"\nEdad: ";cin>>gp1.p1.edad;
	fflush(stdin);
	cout<<"Segunda persona";
	cout<<"\n\nNombre: ";cin.getline(gp1.p2.nombre,30,'\n');
	cout<<"\nEdad: ";cin>>gp1.p2.edad;
	fflush(stdin);
	cout<<"Tercera persona";
	cout<<"\n\nNombre: ";cin.getline(gp1.p3.nombre,30,'\n');
	cout<<"\nEdad: ";cin>>gp1.p3.edad;
	
}


void mayor(gpersonas gp1){
	
	if(gp1.p1.edad>gp1.p2.edad && gp1.p1.edad>gp1.p3.edad){
		cout<<"\nLa persona con mayor edad es: "<<gp1.p1.nombre;
	}
	else if(gp1.p2.edad>gp1.p1.edad && gp1.p2.edad>gp1.p3.edad){
		cout<<"\nLa persona con mayor edad es: "<<gp1.p2.nombre;
	}
	else if(gp1.p3.edad>gp1.p1.edad && gp1.p3.edad>gp1.p2.edad){
		cout<<"\nLa persona con mayor edad es: "<<gp1.p3.nombre;
	}
	
}