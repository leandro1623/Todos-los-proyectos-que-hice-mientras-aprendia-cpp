#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	char palabra[50];
	char palabra2[50];
	
	cout<<"Digite una frase: ";
	cin.getline(palabra,50,'\n');
	
	strcpy(palabra2, palabra);
	
	cout<<palabra2<<endl;
	
	getch();
	return 0;
}
