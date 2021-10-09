#include<iostream>
#include "conio.h"

using namespace std;


int main(){
	
	int num[]={3,2,4,1,5};
	int i,j,aux=0;
	
	//metodo burbuja
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(num[j] > num[j+1]){
				aux = num[j];
				num[j] = num[j+1];
				num[j+1] = aux;
			}
		}
	}
	
	//mostrando resultado
	cout<<"\nOrden asendente: ";
	for(i=0;i<5;i++){
		cout<<num[i];
	}
	
	
	
	getch();
	return 0;
}
