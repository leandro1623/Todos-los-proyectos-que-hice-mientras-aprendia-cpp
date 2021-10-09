#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numero,nprimo=2;
	
	cout<<"Digite el numero a descomponer en factores primos: ";cin>>numero;
	
	cout<<"\nLos factores primos son: ";
	
	do{
		if(numero%nprimo == 0){
			numero /= nprimo;
			if(numero != 1){
				cout<<nprimo<<", ";
			}
			else{
				cout<<nprimo<<". ";
			}
		}
		else{
			if(nprimo == 2){
				nprimo+=1;
			}
			else{
				nprimo+=2;
			}
		}
	}while(numero > 1);
	
	getch();
	return 0;
}
