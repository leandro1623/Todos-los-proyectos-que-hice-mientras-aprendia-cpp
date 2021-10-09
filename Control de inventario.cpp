/*Si de cada producto hay más de 30 piezas, entonces debe decir “Sistema abastecido”.?Si de cada producto hay entre 20 y 30 piezas,
 entonces debe decir “Sistema con existencias”.?Si de cada producto hay entre 
10 y 20 piezas, entonces debe decir “Sistema con problemas de abastecimiento”.
?Si de cada producto hay menos de 10 piezas, entonces debe decir “Abastece tu sistema” */

#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	float c;
	
	cout<<"Ingrese la cantidad de cada producto: ";cin>>c;
	
	if(c>30){
		cout<<"\n\nSistema abastecido\n\n";
	}
	else{
		if(c>=21 && c<=30){
			cout<<"\n\nSistema con existencias\n\n";
		}
		else{
			if(c>=11 && c<=20){
				cout<<"\n\nSistema con problemas de abastecimiento\n\n";
			}
			else{
				if(c<10){
					cout<<"\n\nNecesitas abastecer tu sistema\n\n";
				}
			}
		}
	}
	
	
	
	getch();
	return 0;
}
