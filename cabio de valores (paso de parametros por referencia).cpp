#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos(int&,int&);
void cambio(int&,int&);

int x,y;

int main(){
	
	pedirDatos(x,y);
	cambio(x,y);
	
	cout<<endl<<endl;
	cout<<"El nuevo valor en x es: "<<x<<endl;
	cout<<"El nuevo valor en y es: "<<y<<endl;
	
	getch();
	return 0;
}


void pedirDatos(int& x,int& y){
	cout<<"Digite un valor en x: ";cin>>x;
	cout<<"Digite otro valor en y: ";cin>>y;
}

void cambio(int& x,int& y){
	int aux=x;
	x=y;
	y=aux;

}


