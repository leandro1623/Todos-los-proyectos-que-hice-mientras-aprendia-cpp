#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	char palabra[30];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra,30,'\n');
	
	strlwr(palabra);
	
	cout<<palabra;
	
	
	
	
	getch;
	return 0;
}
