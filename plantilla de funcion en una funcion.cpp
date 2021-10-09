#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

template<class global>
global al_cuadrado(global x);

int main(){
	
	int y=3;
	int x;
	
	x=al_cuadrado(y); 
	
	cout<<x;
	
	
	getch();
	return 0;
}


template<class global>
global al_cuadrado(global x){
	global cua;
	
	cua=pow(x,2);
	
	return cua;
	
}