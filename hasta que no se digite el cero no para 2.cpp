#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int entrada,aux=0,contador[aux];
	
	do{
		cout<<"Digite un numero **(TENGA EN CUENTA QUE HASTA QUE NO SE DIGITE EL CERO(0) EL PROGRAMA NO SE DETENDRA)** : ";cin>>entrada;
		if(entrada != 0){
			contador[aux] = entrada;
			aux++;
		}
		
	}while(entrada !=0);
	
	aux--;
	
	cout<<"\n\n\tLos numeros digitados anterior al cero(0) son: ";
	 for(int i=0;i<=aux;i++){
	 	cout<<contador[i]<<", ";
	 }
	
	
	
	getch();
	return 0;
}

