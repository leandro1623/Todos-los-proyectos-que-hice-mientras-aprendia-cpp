#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int *arr;
	arr=new int[3];
	
	for(int i = 0; i<3;i++){
		cout<<"Digite un numero: ";cin>>arr[i];
	}
	
	for(int i = 0; i<3;i++){
		cout<<"\n\nEl arreglo es: "<<arr[i]<<"\nY su direccion de almacenamiento es: "<<&arr[i];
	}
	
	getch();
	return 0;
}
