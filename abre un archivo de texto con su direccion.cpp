#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>

void abrir_archivo();

int main(){
	abrir_archivo();
}

//abre un archivo de texto
void abrir_archivo(){
	std::ifstream archivo;
	std::string nombre,contenido;
	
	std::cout<<"\nDigite la direccion del archivo a abrir: ";
	getline(std::cin,nombre);
	
	archivo.open(nombre.c_str(),std::ios::in);
	if(archivo.fail()){
		std::cout<<"\nERROR404";
		exit(1);
	}
	getline(archivo,contenido);
	std::cout<<contenido<<"\n\n";
	
	system("pause");
	archivo.close();
}