#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int vocales(char *nombre,int);

int main(){
	char *nombre=new char[40];
	cout<<"Digite su nombre: ";
	cin.getline(nombre,40,'\n');
	cout<<"\nLa cantidad de vocales son: "<<vocales(nombre,40)<<endl;
	
	
	system("pause");
	return 0;
}

int vocales(char *nombre,int n){
	int cont=0;
	while(*nombre){
		strupr(nombre);
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	return cont;
	
}