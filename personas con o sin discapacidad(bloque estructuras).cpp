#include<iostream>
#include<string.h>

struct persona{
	char nombre[30];
	bool discapasida;
}personas[999],personasCon[999],personasSin[999];


int main(){
	int canP,con=0,sin=0;
	std::cout<<"Digite el numero de personas: ";std::cin>>canP;
	for(int i=0;i<canP;i++){
		fflush(stdin);
		std::cout<<"\nPersona #"<<i+1<<"\n";
		std::cout<<"\nNombre: ";std::cin.getline(personas[i].nombre,30,'\n');
		std::cout<<"\nTiene discapasidad(1.si, 0.no): ";std::cin>>personas[i].discapasida;
		
		if(personas[i].discapasida==1){
			strcpy(personasCon[con].nombre,personas[i].nombre);
			con++;
		}
		if(personas[i].discapasida==0){
			strcpy(personasSin[sin].nombre,personas[i].nombre);
			sin++;
		}
	}
	
	std::cout<<"\nPersonas con discapasidad.\n";
	for(int i=0;i<con;i++){
		std::cout<<personasCon[i].nombre<<std::endl;
	}
	std::cout<<"\nPersonas sin discapasidad.\n";
	for(int i=0;i<con;i++){
		std::cout<<personasSin[i].nombre<<std::endl;
	}
	
	std::cout<<"\n\n";
	system("pause");
}