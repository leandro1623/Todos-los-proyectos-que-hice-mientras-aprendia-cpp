#include<iostream>
#include<stdlib.h>
#include<fstream>

struct persona{
	char nombre[30],edad[3],cedula[13],numero[15];
};

void guardar_datos(persona);
void pedir_datos(persona&);
void mostrar_datos();
void agregar_datos();
void menu();
void mostrar_cursor();


persona datos;


int main(){
	menu();
}

//menu
void menu(){
	char opc;
	do{
		system("cls");
		std::cout<<"\n1. agregar";
		std::cout<<"\n2. mostrar";
		std::cout<<"\n3. Salir";
		std::cout<<"\nOpcion: ";std::cin>>opc;
		
		switch(opc){
			case '1': agregar_datos();std::cout<<"\n";mostrar_cursor();break;
			case '2': mostrar_datos();std::cout<<"\n";mostrar_cursor();break;
		}
	system("pause");
	}while(opc!='3');
}

//guarda los datos de una persona en un archivo txt
void guardar_datos(persona datos){
	std::ofstream archivo;
	archivo.open("Datos de los clientes.txt",std::ios::out);//abriendo archivo
	if(archivo.fail()){
		std::cout<<"\nERROR404";
		exit(1);
	}
	//guradando datos
	//pidiendo datos
	archivo<<"Nombre: "<<datos.nombre;
	archivo<<"\nEdad: "<<datos.edad;
	archivo<<"\nCedula: "<<datos.cedula;
	archivo<<"\nNumero de telefono: "<<datos.numero;
	archivo<<"\n";
	std::cout<<archivo.tellp();
	archivo.close();
}

//pide los datos al usuario
void pedir_datos(persona &datos){
	fflush(stdin);
	std::cout<<"\nDigite su Nombre: ";std::cin.getline(datos.nombre,30,'\n');
	std::cout<<"\nDigite su Edad: ";std::cin.getline(datos.edad,3,'\n');
	std::cout<<"\nDigite su Cedula: ";std::cin.getline(datos.cedula,13,'\n');
	std::cout<<"\nDigite su Numero de telefono: ";std::cin.getline(datos.numero,15,'\n');
}

//abre un archivo txt y muestra sus datos en pantalla
void mostrar_datos(){
	std::ifstream archivo;
	std::string contenido;
	archivo.open("Datos de los clientes.txt",std::ios::in);
	if(archivo.fail()){
		std::cout<<"\nERRROR404\n\n";
		exit(1);
	}
	std::cout<<"\nDATOS DE LOS CLIENTES\n";
	while(!archivo.eof()){
	getline(archivo,contenido);
	std::cout<<contenido<<"\n";
	}
	archivo.close();
}

//void agraga datos al doc txt
void agregar_datos(){
	std::ofstream archivo;
	persona datos;
	pedir_datos(datos);
	archivo.open("Datos de los clientes.txt",std::ios::app);
	if(archivo.fail()){
		std::cout<<"\nERRROR404\n\n";
		exit(1);
	}
	archivo<<"------------------------------------------------------------\n";
	archivo<<"Nombre: "<<datos.nombre;
	archivo<<"\nEdad: "<<datos.edad;
	archivo<<"\nCedula: "<<datos.cedula;
	archivo<<"\nNumero de telefono: "<<datos.numero;
	archivo<<"\n";
	std::cout<<archivo.tellp();
	archivo.close();
}


void mostrar_cursor(){
	std::ofstream archivo;
	persona datos;
	std::cout<<archivo.tellp();
	archivo.close();
}





