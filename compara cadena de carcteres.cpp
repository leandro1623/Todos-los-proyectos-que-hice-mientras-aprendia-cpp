#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	char palabra[30],palabra2[30];
	int x;
	
	cout<<"Digite una frase: ";
	cin.getline(palabra,30,'\n');
	
	cout<<"Digite una frase: ";
	cin.getline(palabra2,30,'\n');
	
	cout<<endl;
	
	if(strcmp(palabra,palabra2) == 0){
		cout<<"\nLas frases son iguales.";
	}
	else{
		
		cout<<palabra<<" es diferente de "<<palabra2;
		
		if(strcmp(palabra,palabra2) > 1){
			cout<<" y "<<palabra<<" es mayor alfabeticamente que "<<palabra2<<endl;
		}
		else if(strcmp(palabra,palabra2) < 1){
			cout<<" y "<<palabra2<<" es mayor alfabeticamente que "<<palabra<<endl;
		}
	}
	
	getch();
	return 0;
}
