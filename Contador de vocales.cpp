#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	cout<<"\tContador de vocales.\n\n";	
	char frase[30];
	int a=0,e=0,i=0,o=0,u=0,contador;
	int A=0,E=0,I=0,O=0,U=0;
	
	cout<<"Digite una frase: ";
	cin.getline(frase,30,'\n');
	
	//vocales minusculas
	contador=strlen(frase);
	for(int i=0;i<contador;i++){
		switch(frase[i]){
			case 'a':a++;break;
			case 'e':e++;break;
			case 'i':i++;break;
			case 'o':o++;break;
			case 'u':u++;break;
		}
	}
	
	cout<<"\nVocales minusculas\n";
	cout<<"a = "<<a<<endl;
	cout<<"e = "<<e<<endl;
	cout<<"i = "<<i<<endl;
	cout<<"o = "<<o<<endl;
	cout<<"u = "<<u<<endl;
	
		contador=strlen(frase);
	for(int i=0;i<contador;i++){
		switch(frase[i]){
			case 'A':A++;break;
			case 'E':E++;break;
			case 'I':I++;break;
			case 'O':O++;break;
			case 'U':U++;break;
		}
	}
	
	cout<<"\nVocales MAYUSCULAS\n";
	cout<<"A = "<<A<<endl;
	cout<<"E = "<<E<<endl;
	cout<<"I = "<<I<<endl;
	cout<<"O = "<<O<<endl;
	cout<<"U = "<<U<<endl;
	
	
	getch();
	return 0;
}
