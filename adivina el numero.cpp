#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){
	
	cout<<"\t\tAdivina el numero\n\n";
	int numero,dato,contador=0;
	
	srand(time(NULL));
	dato = 1+rand()%(100);
	
	do{
		cout<<"\n\nDigite un numero: ";cin>>numero;
	
			if(dato > numero){
				cout<<"Digite un numero mayor ";
			}
			else if(dato < numero){
				cout<<"Digite un numero menor ";
			}
			contador++;
	}while(dato != numero);
	
	cout<<"\n\n\t\tFELICIDADES ADIVINASTE EL NUMERO"<<endl;
	cout<<"\n\t\t La cantidad de intentos fallidos fue: "<<contador-1<<endl<<endl;

	system("pause");
	return 0;
}
