#include<iostream>
#include<conio.h>
using namespace std;

int potencia(int x,int y);


int main(){
	int x,y;
	cout<<"Digite un numero: ";cin>>x;
	cout<<"\nDigite la potencia: ";cin>>y;
	x=potencia(x,y);
	cout<<"\nEl resultado es: "<<x<<endl;
	
	getch();
	return 0;
}

int potencia(int x,int y){
	
	if(y<1){
		x=1;
		return x;
	}
	else{
		if(x==1){
			return x;
		}
		else{
			return x*potencia(x,y-1);
		}
	}
}