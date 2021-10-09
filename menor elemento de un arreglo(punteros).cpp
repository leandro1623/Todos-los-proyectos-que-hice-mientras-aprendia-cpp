#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	long long arr[999],n,menor=999999999999;
	long long *x,*y,*z;
	x=arr;y=&n;z=&menor;
	cout<<"Digite la cantidad de numeros a ingresar: ";cin>>*y;//cantidad de elementos en el arreglo
	for(int i=0;i<*y;i++){
		cout<<"\nDigite un numero: ";cin>>*x;//llenando arreglo
		if(*x < *z){//buscando menor elemento
			*z=*x;
		}
		x++;//aumentando a *x
	}
	cout<<"\nEl menor elemento es : "<<*z<<endl;//menor elemento
	
	getch();
	return 0;
}