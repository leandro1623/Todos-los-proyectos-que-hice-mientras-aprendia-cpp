#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	char palabra[30];
	
	cout<<"Digite su nombre en mayusculas: ";
	cin.getline(palabra,30,'\n');
	
	if(palabra[0] == 'a' || palabra[0] == 'A'){
		strlwr(palabra);
		cout<<palabra;
	}
	else{
		cout<<palabra;
	}
	
	
	getch();
	return 0;
}
