#include <iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int arreglo1[5]= {5,6,7,8,9};
	int arreglo2[5];
	
	for(int i=0;i<5;i++){
		arreglo2[i] = arreglo1[i];
	}
	
	for(int i=0;i<5;i++){
	cout<<arreglo2[i]*2<<", ";
	}

	getch();
	return 0;
}
