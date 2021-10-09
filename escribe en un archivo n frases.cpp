#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>

void escribir();

int main(){
	escribir();
	
}

//escribe texto n veces en un archivo .txt
void escribir(){
	std::ofstream archivo;
	char nombreA[20],frase[100],rpt;
	std::cout<<"\nDigite el nombre del archivo: ";std::cin.getline(nombreA,20,'\n');
	archivo.open(nombreA,std::ios::out);
	if(archivo.fail()){
		std::cout<<"\nERROR404\n\n";
		exit(1);
	}
	do{
		fflush(stdin);
		std::cout<<"\nDigite una frase: ";std::cin.getline(frase,100,'\n');
		archivo<<frase<<"\n";
		std::cout<<"\nDesea escribir otra frase (s/n): ";std::cin>>rpt;
		
	}while((rpt=='s' || rpt=='S'));
	archivo.close();
	
}