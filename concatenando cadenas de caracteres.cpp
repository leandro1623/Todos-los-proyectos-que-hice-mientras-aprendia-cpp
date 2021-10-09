#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	char palabra1[]="hola ";
	char nombre_usuario[30];
	char palabra2[]=", como estas?";
	char oracion[50];
	
	
	cout<<"Digite su nombre: ";
	cin.getline(nombre_usuario,30,'\n');
	
	strcpy(oracion,palabra1);
	strcat(oracion,nombre_usuario);
	strcat(oracion,palabra2);
	cout<<"\t\t\n"<<oracion<<endl;
	
	getch();
	return 0;
}
