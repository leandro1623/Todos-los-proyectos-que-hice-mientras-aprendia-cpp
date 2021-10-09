#include<iostream>
#include<stdlib.h>
using namespace std;

void contador(char *palabra);


int main(){
	char *palabra=new char[50];//arreglo dinamico de tipo caracter
	cout<<"Digite una palabra, nombre, o frase: ";cin.getline(palabra,40,'\n');//llenado arreglo
	contador(palabra);//contando vocales
	
	//fin
	system("pause");
	return 0;
}

void contador(char *palabra){
	int a=0,e=0,i=0,o=0,u=0;
	
	while(*palabra){
		strupr(palabra);
		switch(*palabra){
			case 'A': a++;break;
			case 'E': e++;break;
			case 'I': i++;break;
			case 'O': o++;break;
			case 'U': u++;break;
		}
		palabra++;
	}
	
	cout<<"\nContador de vocales: \n";
	cout<<"A = "<<a<<endl;
	cout<<"E = "<<e<<endl;
	cout<<"I = "<<i<<endl;
	cout<<"O = "<<o<<endl;
	cout<<"U = "<<u<<endl;
	cout<<endl<<endl;
	
}