#include<iostream>
#include<stdlib.h>
#include<fstream>

void lectura(char nombre[]);

int main(){
	char nombre[100];
	std::cout<<"Digite la direccion del archivo: ";
	std::cin.getline(nombre,100,'\n');
	lectura(nombre);
	system("pause");
}

void lectura(char nombre[]){
	std::ifstream archivo;
	std::string frase;
	archivo.open(nombre,std::ios::in);
	if(archivo.fail()){
		std::cout<<"\nERROR404";
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,frase);
		std::cout<<frase<<"\n";
	}
	archivo.close();
}