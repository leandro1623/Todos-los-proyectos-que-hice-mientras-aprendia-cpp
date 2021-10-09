#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void suma();

int *n,*arr,*m,*s;

int main(){
	pedirDatos();
	suma();
	
	delete[] arr;
	delete n,m,s; 
	
	system("pause");
	return 0;
}

void pedirDatos(){
	m=new int;
	m=0;
	n=new int;
	cout<<"Digite el numero de elementos: ";cin>>*n;
	arr=new int[*n];
	for(int i=0;i<*n;i++){
		cout<<"\nDigite un numero: ";cin>>arr[i];
	}
	
}

void suma(){
	s=new int;
	*s=0;
	for(int i=0;i<*n;i++){
		*s+=arr[i];
	}
	cout<<"\n\nLa suma es: "<<*s<<endl;
	
}