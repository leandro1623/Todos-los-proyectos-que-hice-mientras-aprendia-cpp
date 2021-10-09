#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	char nombres[100][100];
	int filas, columnas;
	
	cout<<"Digite el numero de filas: ";cin>>filas;
	cout<<"Digite el numero de columnas: ";cin>>columnas;
	
	//rellnando matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"\n["<<i<<"]["<<j<<"] - Digite letra: ";
			cin>> nombres[i][j];
		}
	}
	
	//mostrando matriz
	for(int i=0;i<filas;i++){
		cout<<"\n";
		for(int j=0;j<columnas;j++){
			cout<<nombres[i][j];
		}
	}
	
	getch();
	return 0;
}
