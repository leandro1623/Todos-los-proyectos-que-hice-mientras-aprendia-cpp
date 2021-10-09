#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>


void escribir();

char hola[]="hola";

int main(){
	escribir();
}

//escribe en un archivo .dat
void escribir(){
	std::ofstream archivoD;
	archivoD.open("archivo data.dat",std::ios::out | std::ios::binary);
	if(archivoD.fail()){
		std::cout<<"\nERROR404\n";
	}
	
	archivoD.write((char *)&hola,sizeof(hola));
	archivoD.close();
}