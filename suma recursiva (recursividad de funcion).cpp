#include<iostream>
#include<conio.h>
using namespace std;

int suma(int);

int main(){
	int x;
	
	do{
	cout<<"\nDigite un numero: ";cin>>x;
	}while(x<=0);
	
	x = suma(x);
	
	cout<<"\nLa suma es: "<<x<<endl;
	
	getch();
	return 0;
}

int suma(int x){
	if(x==1){
		x=1;
	}
	else if(x>1){
		x += suma(x-1);
	}
	
	return x;
}
