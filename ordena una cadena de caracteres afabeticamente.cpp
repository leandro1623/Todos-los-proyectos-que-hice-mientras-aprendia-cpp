#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//prototipos de funcion
void pedirDatos();
void quickSort(char palabra[],int&,int&);
void busquedaBinaria(char palabra[],char& dato);
void intercambio(char&,char&);

//variables globales
char palabra[99];
int tam,pri=0,ult;

int main(){//funcion main
	
	pedirDatos();//pidiendo datos
	quickSort(palabra,pri,ult);//ordenando cadena
	
	
	//mostrando cadena desde a-z
	cout<<"\n**Orden desde a-z**\n";
	for(int i=0;i<tam;i++){
		cout<<palabra[i];
		if(i<tam-1){
			cout<<"-";
		}
		else{
			cout<<". ";
		}
	}
	
	//mostrando cadena desde z-a
	cout<<"\n**Orden desde z-a**\n";
	for(int i=tam-1;i>=0;i--){
		cout<<palabra[i];
		if(i>0){
			cout<<"-";
		}
		else{
			cout<<". ";
		}
	}
	
	char dato;
	cout<<"\n\nDigite el dat que desea buscar: ";cin>>dato;
	busquedaBinaria(palabra,dato);
	
	
	getch();
	return 0;
	
}

void pedirDatos(){//llenamdo cadena
	cout<<"Digite una palabra: ";cin.getline(palabra,99,'\n');
	tam=strlen(palabra);//tomando tamano de la cadena
	ult=tam-1;//tomando ultima posicion
}

void quickSort(char palabra[],int& pri,int& ult){//ordenando cadena
	char pivote;
	int central,i,j;
	
	central=(pri+ult)/2;
	pivote=palabra[central];
	i=pri;
	j=ult;
	do{
		while(palabra[i]<pivote) i++;
		while(palabra[j]>pivote) j--;
		
		if(i<=j){
			intercambio(palabra[i],palabra[j]);//intercambiando valores
			i++;
			j--;
		}
		
	}while(i<=j);
	
	if(pri<j){//ordenando izquierda
		quickSort(palabra,pri,j);
	}
	if(i<ult){
		quickSort(palabra,i,ult);//ordenado derecha
	}
	
	
}

void intercambio(char& x,char& y){//funcion de intercambio
	char aux;
	
	aux=x;
	x=y;
	y=aux;
	
}

void busquedaBinaria(char palabra[],char& dato){
	
	//variables para busqueda binaria
	int pri=0,mitad,ult;
	char band='f';
	ult=strlen(palabra);
	
	while(pri<=ult){//busqueda binaria
		mitad=(pri+ult)/2;
		
		if(palabra[mitad]==dato){
			band='v';
			break;
		}
		if(palabra[mitad]<dato){
			pri=mitad;
			mitad=(pri+ult)/2;
		}
		if(palabra[mitad]>dato){
			ult=mitad;
			mitad=(pri+ult)/2;
		}
	}
	
	if(band=='v'){
		cout<<"El dato fue encontrado.";
	}
	else{
		cout<<"El dato fue encontrado.";
	}
	
		
}
