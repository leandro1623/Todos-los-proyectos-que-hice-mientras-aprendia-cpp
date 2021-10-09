#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos(int&);
void cambio(int,int&,int&,int&,int&,int&,int&);

int valor,cien,cincuenta,veinte,diez,cinco,uno;

int main(){
	
	pedirDatos(valor);
	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	cout<<"El cambio es: \n";
	cout<<"\nCien: "<<cien;
	cout<<"\nCincuenta: "<<cincuenta;
	cout<<"\nVeinte: "<<veinte;
	cout<<"\nDiez: "<<diez;
	cout<<"\nCinco: "<<cinco;
	cout<<"\nUno: "<<uno;
	
	getch();
	return 0;
}


void pedirDatos(int& valor){
	cout<<"Digite un valor: ";cin>>valor;
}

void cambio(int valor,int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cien=valor/100;
	valor%=100;
	cincuenta=valor/50;
	valor%=50;
	veinte=valor/20;
	valor%=20;
	diez=valor/10;
	valor%=10;
	cinco=valor/5;
	valor%=5;
	uno=valor/1;
}



