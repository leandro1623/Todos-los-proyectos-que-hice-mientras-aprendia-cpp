#include<iostream>

using namespace std;


int main(){
	
	float n,num=1,resultado,cont=2;
	
	cout<<"Digite la cantidad de veces a sumar la restar: ";cin>>n;
	
	for(int i=1 ;i<=n; i++){
		
		resultado += num-cont;
		
		num+2;
		cont+2;	
	}
	
	cout<<"\n\tEl resultado es: "<<resultado;
	
	return 0;
}
