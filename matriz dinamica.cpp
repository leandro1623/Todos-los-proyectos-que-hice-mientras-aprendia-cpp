#include<iostream>
#include<stdlib.h>
using namespace std;

void takingDates();
void showingMatriz(int **,int&,int&);


int **matriz,nf,nc;

int main(){
	takingDates();
	showingMatriz(matriz,nf,nc); 
	
	//liberando memoria
	for(int i=0;i<nf;i++){
		delete matriz[i];
	}
	
	delete matriz;
	system("pause");
	return 0;
}

void takingDates(){
	cout<<"Digit el numero de filas: ";cin>>nf;//numero de filas
	cout<<"Digit el numero de columnas: ";cin>>nc;//numero de colunas
	
	matriz=new int*[nf];//matriz dinamica
	for(int i=0;i<nf;i++){
		matriz[i]=new int[nc];
	}
	
	//llenando matriz
	for(int i=0;i<nf;i++){
		for(int j=0;j<nc;j++){
			cout<<"\nDigite un numero para ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
	
	
	
}

void showingMatriz(int **matriz,int& nf,int& ncol){
	
	for(int i=0;i<nf;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<endl;
	}
	
}

