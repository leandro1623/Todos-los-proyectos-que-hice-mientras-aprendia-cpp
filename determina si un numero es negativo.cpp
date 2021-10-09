#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int num;
	
	cout<<"Digite un numero: ";cin>>num;
	
	
	if (num ==0){
		cout<<"\n\nEl numero es cero.";
	}
	else if(num < 0){
		cout<<"\n\nEl numero es negativo.";
	}
	else {
		cout<<"\n\nEl numero es positivo.";
	}
	
	getch();
	return 0;
}
