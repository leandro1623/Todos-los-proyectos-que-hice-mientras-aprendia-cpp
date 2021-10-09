#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	cout<<"\n** Determina si una palabra es polindroma **\n\n";
	
	char palabra[100];
	char polindroma[100];
	
	do{
	cout<<"\nDigite una palabra: ";
	cin.getline(palabra,100,'\n');
	
	strcpy(polindroma,palabra);
	strrev(polindroma);
	
	 if(strcmp(palabra,polindroma) == 0){
			cout<<"\nLa palabra "<<polindroma<<" es polindroma."<<endl;
	}
	else{
		cout<<"\nLa palabra "<<polindroma<<" no es polindroma.\n ";
	}
	}while(strcmp(palabra,polindroma) != 0);
	

	getch();
	return 0;
}
