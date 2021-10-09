#include<iostream>
#include<conio.h>
using namespace std;

int vec[100],tam;

void pedirdatos(int vec[],int&); //pide el tamano del vector y rrellena el vector
void ordenado(int vec[],int&); //verifice si el vector esta ordenado

int main(){
	
	pedirdatos(vec,tam);
	ordenado(vec,tam);
	
	
	getch();
	return 0;
}

void pedirdatos(int vec[],int& tam){ //pide el tamano del vector y rrellena el vector
	cout<<"Digite el tamano del vector: ";cin>>tam;
	
	//llenado vector
	for(int i=0;i<tam;i++){
		cout<<i+1<<".Digite un numero: ";cin>>vec[i];
	}
}

void ordenado(int vec[],int& tam){ //verifice si el vector esta ordenado
	char  band='f';
	
	for(int i=0;i<tam-1;i++){
		if(vec[i]<=vec[i+1]){
			band='v';
		}
		else{
			band='f';
			break;
		}
	}
	
	if(band=='v'){
		cout<<"\nEl vector esta ordenado de forma ascendente";
	}
	else{
		cout<<"\nEl vector no esta ordenado de forma ascendente";
	}
}