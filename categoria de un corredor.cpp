#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


struct corredor{
	char nombre[40];
	int edad;
	char sexo[15];
	char club[40];
}corredor[999];

int categoriaCorredor(int& edad);

int main(){
	int ncorredores,cat;
	char categoria[10];
	cout<<"Digite la cantidad de corredores que va a ingresar: ";cin>>ncorredores;
	for(int i=0;i<ncorredores;i++){//pidiendo datos de los corredores
		fflush(stdin);
		cout<<"\nCORREDOR #"<<i+1<<"\n\n";
		cout<<"\nDigite el nombre: ";cin.getline(corredor[i].nombre,40,'\n');
		cout<<"\nEdad: ";cin>>corredor[i].edad;
		fflush(stdin);
		cout<<"\nSexo: ";cin.getline(corredor[i].sexo,15,'\n');
		cout<<"\nClub: ";cin.getline(corredor[i].club,40,'\n');
	}
	cout<<"\n**mostrando datos de los corredores**\n";
	for(int i=0;i<ncorredores;i++){
		int edad=corredor[i].edad;
		cat = categoriaCorredor(edad);
		if(cat==1){//definiendo categoria del coredor
			strcpy(categoria,"Juvenil");
		}
		else if(cat==2){
			strcpy(categoria,"senior");
		}
		else if(cat==3){
			strcpy(categoria,"Veterano");
		}
		cout<<"\nCORREDOR #"<<i+1<<"\n\n";//mostrando datos de los corredores
		cout<<"\nNombre: "<<corredor[i].nombre;
		cout<<"\nEdad: "<<corredor[i].edad;
		cout<<"\nSexo: "<<corredor[i].sexo;
		cout<<"\nClub: "<<corredor[i].club;
		cout<<"\nCategoria: "<<categoria<<endl;
	}
	
	
	getch();
	return 0;
}


int categoriaCorredor(int& edad){
	int cat;
	
	if(edad<=18){
		cat = 1;
	}
	else if(edad>18 && edad<=40){
		cat = 2;
	}
	else if(edad>40){
		cat = 3;
	}
	
	return cat;
}