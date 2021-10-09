#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int numeros[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero: ";cin>>numeros[i][j];
		}
	}
	
	//mostrando
	for(int i=0;i<3;i++){
		cout<<numeros[i][i]<<endl;
	}
	
	
	getch();
	return 0;
}
