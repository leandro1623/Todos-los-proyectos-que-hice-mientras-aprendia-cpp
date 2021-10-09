#include<iostream>
#include<conio.h>
using namespace std;


void busquedaSecuencial(char cadena[5],char&,char&,int&);


int main(){
	
	char p[5]={'a','b','c','d','e'};
	char dato,band='f',res[40];
	int i=0;
	cout<<"Digite el elemento a buscar: ";
	cin>>dato;
	
	
	busquedaSecuencial(p,dato,band,i);
	
	
	getch();
	return 0;
}

void busquedaSecuencial(char cadena[5],char& dato,char& band,int& i){
	
	while((band=='f') && (i<5)){
		if(cadena[i]==dato){
			band='v';
		}
		i++;
	}
	
	if(band=='v'){
		cout<<"El elemento ha sido encontrado.";
	}
	else{
		cout<<"El elemento no ha sido encontrado.";
	}
	

}