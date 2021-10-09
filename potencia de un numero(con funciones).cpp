#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void funPot(int x,int y);

int numero, potencia;

int main(){
	pedirDatos();
	funPot(numero,potencia);
	
		
	getch();
	return 0;
}


void pedirDatos(){

	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite la potencia: ";
	cin>>potencia;
	
}


void funPot(int x,int y){
	
	long long resultado=1;
	
	for(int i=1;i<=y;i++){
		resultado *= x;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;

}