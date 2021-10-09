#include<iostream>
#include<conio.h>

using namespace std;

void ordenamientoQuicksort(int arr[],int&,int&);
void intercambio(int& x,int& y);


int main(){
	
	int arr[999],tam,prim=0,ult;
	cout<<"Digite el tamano del arreglo: ";cin>>tam;
	ult=tam-1;
	
	for(int i=0;i<tam;i++){
		cout<<"\nDigite un numero: ";cin>>arr[i];
	}
	
	ordenamientoQuicksort(arr,prim,ult);
	
	for(int i=0;i<tam;i++){
		cout<<arr[i]<<"|";
	}
	
	
	getch();
	return 0;
}

void ordenamientoQuicksort(int arr[],int& prim,int& ult){//ordena el arreglo 
	
	int pivote,i,j,central;
	i=prim;
	j=ult;
	central=(prim+ult)/2;
	pivote=arr[central];
	
	do{
		while(arr[i]<pivote) i++;
		while(arr[j]>pivote) j--;
		
		if(i<=j){
			intercambio(arr[i],arr[j]);
			i++;
			j--;
		}
		
	}while(i<=j);
	
	if(prim<j){
		ordenamientoQuicksort(arr,prim,j);
	}
	if(ult>i){
		ordenamientoQuicksort(arr,i,ult);
	}
	
	
}

void intercambio(int& x,int& y){//funcion perteneciente a quick sort -> es para cambiar los elementos mandados aqui
	int aux;
	
	aux=x;
	x=y;
	y=aux;
}