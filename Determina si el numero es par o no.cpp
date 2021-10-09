#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int x;
	
	cout<<"Digite un numero: ";cin>>x;
	
	
	if(x==0){
		cout<<"\n\nEl numero es cero.";
	}
	else if((x%2) == 0){
		cout<<"\n\nEl numero es par.";
	}
	else{
		cout<<"\n\nEl numero no es par.";
	}
	
	getch();
	return 0;
	
}
