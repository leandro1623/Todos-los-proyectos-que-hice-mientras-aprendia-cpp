#include<iostream>
#include<conio.h>

using namespace std;\

int main(){
	
	int edad;
	
	cout<<"Digite su edad: ";cin>>edad;
	
	if(edad >= 18 && edad <= 25){
		cout<<"\n\nSi esta en el rango [18-25].";
	}
	else {
		cout<<"\n\nNo esta en el rango[18-25].";
	}
	
	getch();
	return 0;
}
