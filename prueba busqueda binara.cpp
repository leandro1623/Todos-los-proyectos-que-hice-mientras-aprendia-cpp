#include<iostream>

int main(){
	
	char band='f';
	int arr[]={1,2,3,4,5};
	int inferior,superior,mitad,dato,cont=0;
	dato=5;
	inferior=0;
	superior=5;
	
	while(cont<=5){
	while(inferior<=superior){
		mitad=(inferior+superior)/2;
		if(arr[mitad]==dato){
			band='v';
			break;
		}
		if(dato<arr[mitad]){
			superior=mitad;
			mitad=(inferior+superior)/2;
		}
		if(arr[mitad]<dato){
			inferior=mitad;
			mitad=(inferior+superior)/2;
		}
		cont++;
	}
}
	if(band=='v'){
		printf("El numero fue encontrado");
	}
	else{
		printf("el numero no fue encontrado");
	}	
}