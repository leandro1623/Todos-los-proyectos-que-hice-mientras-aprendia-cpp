#include<iostream>
#include<stdlib.h>
using namespace std;

//prototipos de funcion
void takingDates();
int retornaMatrizTranspuesta(int **,int *,int *,int&,int&);

int **m,*nfilas=new int,*ncol=new int,x=0,k=0;

int main(){
	takingDates();//tomando datos
	cout<<"\n\nMATRIZ TRANSPUESTA\n\n";
	for(int i=0;i<*nfilas;i++){
		for(int j=0;j<*ncol;j++){
			cout<<retornaMatrizTranspuesta(m,nfilas,ncol,x,k)<<" ";//mostrando matriz
			k++;
		}
		x++;
		k=0;
		cout<<endl;
	}
	
	cout<<endl;
	//liberando memoria
	for(int i=0;i<*nfilas;i++){
		delete[] m[i];
	}
	delete[] m;
	
	system("pause");
	return 0;
}

void takingDates(){
	cout<<"Digite el numero de filas: ";cin>>*nfilas;//pidiendo numero de filas
	cout<<"\nDigite el numero de columnas: ";cin>>*ncol;//numero de columnas
	
	m=new int*[*nfilas];//creando matriz para filas
	for(int i=0;i<*nfilas;i++){
		m[i]=new int[*ncol];//apuntando filas a columnas
	}
	
	
	for(int i=0;i<*nfilas;i++){
		for(int j=0;j<*ncol;j++){
			cout<<"\nDigite un numero para ["<<i<<"]["<<j<<"]: ";cin>>*(*(m+i)+j);//llenando matriz
		}
	}
	
}


int retornaMatrizTranspuesta(int **m,int *nfilas,int *ncol,int& x,int& k){
		return *(*(m+k)+x);//retornando datos de cada posicion
}





