#include<iostream>
#include<stdlib.h>
using namespace std;


void pedirDatos();//prototipo de funcion
void ordenarVector(int *arr,int,int);//prototipo de funcion

int *n=new int,*arr=new int[*n];//variables punteros globales

int main(){//main
	pedirDatos();//llamando funcion
	ordenarVector(arr,0,*n);//llamando funcion
	
	for(int i=1;i<=*n;i++){//mostrando el vector ordenado
		cout<<arr[i]<<"|";
	}
	cout<<endl;
	
	delete[] arr,n;//borrando espacio reservado
	//fin 
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos: ";cin>>*n;//pidiendo el numero de elementos del arreglo
	for(int i=0;i<*n;i++){//llenando vector
		cout<<"\nDigite un numero: ";cin>>arr[i];
	}
	
}

void ordenarVector(int *arr,int prim,int ult){///ordenando vector con quik sort
	int pivote,j,k;
	
	j=prim;
	k=ult;
	pivote=(j+k)/2;
	
	do{
		while(*(arr+j)<pivote) j++;
		while(*(arr+k)>pivote) k--;
		
		if(j<=k){
			int aux=*(arr+j);//intercambiando valores
			*(arr+j)=*(arr+k);//intercambiando valores
			*(arr+k)=aux;//intercambiando valores
			j++;
			k--;
		}
		
	}while(j<=k);
	
	
	if(prim<=k){//ordenando lado izquierdo del vector
		ordenarVector(arr,prim,k);//recursividad
	}
	if(ult>=j){//ordenando lado derecho del vector
		ordenarVector(arr,j,ult);//recursividad
	}
	
}