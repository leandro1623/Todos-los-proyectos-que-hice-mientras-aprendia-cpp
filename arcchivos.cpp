#include<iostream>
#include<stdlib.h>
#include<fstream>

void crear();


int main(){
	crear();
}

void crear(){
	std::ofstream archivo;
	archivo.open("mi archivo.txt",std::ios::out);
	char nombre[20];
	if(archivo.fail()){
		std::cout<<"error";
		exit(1);
	}
	std::cout<<"digite su nombre: ";std::cin.getline(nombre,20,'\n');
	archivo<<"Nombre: "<<nombre;
	archivo.close();
}


