#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	char palabra[30],palabra2[30];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra,30,'\n');
	
	cout<<"Digite otra palabra: ";
	cin.getline(palabra2,30,'\n');
	
	strupr(palabra);
	strupr(palabra2);
	
	
	if(strcmp(palabra,palabra2)==0){
		cout<<"\nLas palabras son iguales.\n";
	}
	else{
		cout<<"\nLas palabras no son iguales.\n";
	}
	
	cout<<"1. "<<palabra<<endl;
	cout<<"2. "<<palabra2<<endl;
	
	
	getch();
	return 0;
}
