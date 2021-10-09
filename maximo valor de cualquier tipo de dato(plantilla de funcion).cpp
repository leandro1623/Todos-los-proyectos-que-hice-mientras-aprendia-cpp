#include<iostream>
#include<conio.h>
using namespace std;

template <class global>
global maximo(global n1, global n2,global n3);

int main(){
	
	int x=54, y=87, z= 5;
	
	
	cout<<"El maximo es: "<<maximo(x,y,z)<<endl;
	getch(); 
	return 0;
}




template <class global>
global maximo(global n1, global n2,global n3){
	global max=0;
	
	if(n1>n2 && n1>n3){
		max+=n1;
	}
	else{
		if(n2>n1 && n2>n3){
			max+=n2;
		}
		else{
			if(n3>n1 && n3>n2){
				max+=n3;
			}
		}
	}
	 
	
	 return max;
}

