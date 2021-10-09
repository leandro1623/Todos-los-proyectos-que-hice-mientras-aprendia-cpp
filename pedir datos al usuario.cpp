#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int edad;
	char nombre[20];
	char sexo[10];
	float altura;
	
	
	//entrada de datos
	
	cout<<"Dijite su nombre: ";cin>>nombre;
	cout<<"\nDijite su edad: ";cin>>edad;
	cout<<"\nDijite su sexo: ";cin>>sexo;
    cout<<"\nDijite su altura: ";cin>>altura;
	
	cout<<"\n\n";
	//salida de datos
	
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Altura: "<<altura<<endl;
	
	getch();
	return 0;
}
