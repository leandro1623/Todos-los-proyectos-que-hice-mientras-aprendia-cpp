#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int num[]={3,2,4,5,1};
	int i,j,aux,min;
	
	for(i=0;i<5;i++){
		min=i;
		for(j=i+1;j<5;j++){
			if(num[min] > num[j])
			min=j;
		}
		aux=num[i];
		num[i]=num[min];
		num[min]=aux;
	}
	
	cout<<"Orden asendente: ";
	for(i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	
	
	getch();
	return 0;
}
