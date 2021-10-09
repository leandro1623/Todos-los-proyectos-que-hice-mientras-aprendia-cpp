#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	long n,numero,aux=0;
	
	cout<<"\tDigite la cantidad de numeros que desea sumar: ";cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"\n\t("<<i<<") Digite el numero a sumar: ";cin>>numero;
		aux += numero;
	}
	
	cout<<"\n\n\t** La suma de los numero es: "<<aux<<" **";
	
	
	getch();
	return 0;
}
