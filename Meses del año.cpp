#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int num;
	
	cout<<"Digite un numero entre[1-12]: ";cin>>num;
	
	cout<<"\n\n";
	
	switch(num){
		case 1:cout<<"Enero";break;
		case 2:cout<<"febrero";break;
		case 3:cout<<"Marzo";break;
		case 4:cout<<"Abril";break;
		case 5:cout<<"Mayo";break;
		case 6:cout<<"Junio";break;
		case 7:cout<<"Julio";break;
		case 8:cout<<"Agosto";break;
		case 9:cout<<"Septiembre";break;
		case 10:cout<<"Octubre";break;
		case 11:cout<<"Noviembre";break;
		case 12:cout<<"Diciembre";break;
		default:cout<<"El numero dijitado no esta en el rango de [1-12].\n";break;
	}
	
	cout<<"\n\n";
	
	getch();
	return 0;
}
