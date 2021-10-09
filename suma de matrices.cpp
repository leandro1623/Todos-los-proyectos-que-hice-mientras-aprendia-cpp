#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){
	int matriz1[3][3], matriz2[3][3];
	int suma_matrices[3][3], dato;
	
	srand(time(NULL));
	
	//llenando matriz1 de numeros aleatorios
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			dato = 1+rand()%(100);
			matriz1[i][j] = dato;
		}
	}
	
		//llenando matriz2 de numeros aleatorios
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			dato = 1+rand()%(100);
			matriz2[i][j] = dato;
		}
	}
	
	//sumando matrices en suma_matrices
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			dato = 1+rand()%(100);
			suma_matrices[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	
	//MOSTRANDO MATRICES
		cout<<"\nMostrando matriz #1\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<matriz1[i][j]<<" ";
		}
		cout<<endl;
	}
	
		cout<<"\nMostrando matriz #2\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<matriz2[i][j]<<" ";
		}
		cout<<endl;
	}
	
		cout<<"\nMosrtrando suma_matrices\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<suma_matrices[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	getch();
	return 0;
}
