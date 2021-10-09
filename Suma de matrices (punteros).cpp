#include<iostream>
#include<stdlib.h>
using namespace std;

//prototipos de funcion
void takingDates();
int addingMatrices(int **,int **,int *,int *,int,int);

int **m1,**m2,*nf=new int,*nc=new int;//variables globales

int  main(){//main 
	takingDates();//tomando datos
	cout<<"\nMostrando datos\n";
	for(int i=0;i<*nf;i++){//mostrando datos 
		for(int j=0;j<*nc;j++){
			cout<<addingMatrices(m1,m2,nf,nc,i,j)<<" ";
		}
		cout<<"\n";
	}
	//liberando espacio
	for(int i=0;i<*nf;i++){//eliminando matriz 1
		delete *(m1+i);
	}
	delete m1;
	
	for(int i=0;i<*nf;i++){//eliminando matriz 2
		delete *(m2+i);
	}
	delete m2;
	//fin
	cout<<endl;
	system("pause");
	return 0;
}

void takingDates(){// tomando datos

	cout<<"Digite el numero de filas: ";cin>>*nf;
	cout<<"\nDigite el numero de columnas: ";cin>>*nc;
	
	m1=new int*[*nf];//creando matriz 1
	for(int i=0;i<*nf;i++){
		m1[i]=new int[*nc];
	}
	
	cout<<"\nMatriz #1\n";
	for(int i=0;i<*nf;i++){//llenando matriz 1
		for(int j=0;j<*nc;j++){
			cout<<"\nDigite un numero para ["<<i<<"]["<<j<<"]: ";cin>>*(*(m1+i)+j);
		}
	}
		m2=new int*[*nf];//creando matriz 2
	for(int i=0;i<*nf;i++){
		m2[i]=new int[*nc];
	}
	cout<<"\nMatriz #2\n";
	for(int i=0;i<*nf;i++){//llenando matriz 2
		for(int j=0;j<*nc;j++){
			cout<<"\nDigite un numero para ["<<i<<"]["<<j<<"]: ";cin>>*(*(m2+i)+j);
		}
	}
}


int addingMatrices(int **m1,int **m2,int *nf,int *nc,int i,int j){//sumando mtrices
	
	int **sum;
	sum=new int*[*nf];//creando que va a tener la suma 
	for(int i=0;i<*nf;i++){
		sum[i]=new int[*nc];
	}
	
	
	for(int i=0;i<*nf;i++){//sumando matrices
		for(int j=0;j<*nc;j++){
			*(*(sum+i)+j) = (*(*(m1+i)+j)) + (*(*(m2+i)+j));//sumando
		}
	}
	return 	*(*(sum+i)+j);//retornando valores
}