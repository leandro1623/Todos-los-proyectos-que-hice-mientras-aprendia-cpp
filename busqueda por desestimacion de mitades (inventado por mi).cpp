#include<iostream>//libreria
#include<conio.h>//libreria
#include<string.h>//libreria
using namespace std;//es para usar cin y el cout 

bool busquedaSecuencial(int arr[],bool& band,int& dato,int &sup);//prototipo de funcion
void busquedaDesestimacionmitades(int arr[],bool&,int&,int&);//prototipo de funcion
void ordenamientoQuicksort(int arr[],int&,int&);//prototipo de funcion
void intercambio(int&,int&);//prototipo de funcion

int main(){//funcion main -> funcion principal
	int tam,dato;//variables tamano del arreglo y dato a buscar
	bool band;//variable band==false 
	cout<<"\nDigite el tamano del arreglo: ";cin>>tam;//solicitando el tamano del arreglo
	int pri=0,ult=tam-1;//variables para el ordenamiento quick sort
	int arr[tam];//el arreglo con su tamano
	for(int i=0;i<tam;i++){//llenando el arreglo
		cout<<"\nDigite un numero: ";cin>>arr[i];
	}
	cout<<"\nDigite el numero que desea buscar: ";cin>>dato;//solicitando el numero que desea buscar el usuario en el arreglo
	ordenamientoQuicksort(arr,pri,ult);//ordenando el vector para usar la busqueda binaria
	cout<<"\nLas nuevas posiciones de los datos digitados son: ";
	for(int i=0;i<tam;i++){//mostrando el vector en orden ascendente
		cout<<arr[i]<<"|";
	}
	cout<<endl;//dando un espaciado
		busquedaDesestimacionmitades(arr,band,tam,dato);//buscando el numero y mostrando en pantalla si esta en el arreglo
	
	//fin
	getch();
	return 0;
}


void busquedaDesestimacionmitades(int arr[],bool& band,int& tam,int& dato){//busca un elelmento deseado con el metodo buqueda binaria modificado por mi
	
	band=false;
	int inf,sup,medio;
	inf=0;
	sup=tam;
		 while(inf+5<sup && band==false){//comprobando que el arreglo sea menor a 5 y que band == false
	 			medio=(inf+sup)/2;//rellenando la variable medio
	 			if(arr[medio]==dato){//buscando el dato
	 				band==true;
	 				break;
				}
				 if(dato<arr[medio]){//verificando si esta en la izquierda
		 			sup=medio;
		 			medio=(inf+sup)/2;
				}
				if(arr[medio]<dato){//verificando si esta en la derecha
		 			inf=medio;
		 			medio=(inf+sup)/2;
				}
			 }
	

	if(inf<=sup && band==false){
		band=busquedaSecuencial(arr,band,dato,sup);	//implementando la busqueda secuencial
	}
	
	if(band==true){
		cout<<"\nDato encontrado.";
	}
	if(band==false){
		cout<<"\nDato NO encontrado.";
	}
}


bool busquedaSecuencial(int arr[],bool& band,int& dato,int &sup){//busqueda secuencial
	band=false;
	for(int i=0;i<sup;i++){
		if(arr[i]==dato){
			band=true;
			break;
		}
	}
	
	return band;
}


void ordenamientoQuicksort(int arr[],int& prim,int& ult){//ordena el arreglo de forma ascendente con el metodo quick sort 
	
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