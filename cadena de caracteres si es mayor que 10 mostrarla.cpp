#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	char palabra[100];
	int longitud,tam=100;
	
	cout<<"Digite su nombre: ";
	cin.getline(palabra,tam,'\n');
	
	longitud=strlen(palabra);
	
	if(longitud>10){
		cout<<endl<<palabra;
	}
	else{
		cout<<"\nLa cadena de caracteres no es mayor que 10."<<endl;
	}
	
	
	getch();
	return 0;
}
