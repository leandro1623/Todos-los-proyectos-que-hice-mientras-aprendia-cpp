#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	
	float r,h,pi,v;
	
	//entrada
	
	cout<<"Dijite el valor de r: ";cin>>r;
	cout<<"Dijite el valor de h: ";cin>>h;
	cout<<"Dijite el valor de pi: ";cin>>pi;
	
	//acciones
	
	r = r*r;
	v = pi*r*h;
	
	if(v>1.13){
		cout<<"\n\nEl tinaco consultado es optimo *RECOMENDADO*";
	}
	else{
		cout<<"\n\nEl tinaco consultado NO es optimo *HAGA OTRA CONSULTA*";
	}
	
	cout<<"\n\n";
	
	
	system("pause");
	return 0;
}
