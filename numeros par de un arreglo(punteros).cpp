#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	int arr[5];
	int *x=arr;
	
	for(int i=0;i<5;i++){
		cout<<"Digite un numero: ";
		cin>>*x; 
		*x++;
	}
	
	x-=5;

	cout<<"\nNumeros pares:";
	for(int i=0;i<5;i++){
		if((*x%2) == 0){
			cout<<*x<<", ";
		}
		x++;
	}
	
	
	getch();
	return 0;
}