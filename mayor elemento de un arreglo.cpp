#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	long aux=1,arr[10];
	
	for(int i=0;i<10;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>arr[i];
	}
	
	for(int i=0;i<10;i++){
		if(arr[i] > aux){
			aux=arr[i];
		}
	}
	
	cout<<"\n\tEl mayor numero digitado es: "<<aux;
	
	getch();
	return 0;
}
