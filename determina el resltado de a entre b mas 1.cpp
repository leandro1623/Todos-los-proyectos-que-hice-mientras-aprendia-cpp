#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	float a,b,resultado;
	
	
	//entrada
	
	cout<<"Digite el primer numero: ";
	cin>>a;
	cout<<"Digite el segundo numero: ";
	cin>>b;
	
	
	//exprecion 
	resultado =a/b+1;
	
	cout<<"\n\n";
	//salida
	
	cout.precision(7);
	cout<<"El resultado es: "<<resultado<<endl;
	
	getch();
	return 0;
}
