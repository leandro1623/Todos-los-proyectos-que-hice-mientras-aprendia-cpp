#include<iostream>
#include<conio.h>
using namespace std;


void calc_anos(int tdias,int&, int&, int&);

int main(){
	cout<<"\tCalculadora de dias suponiendo que cada mes es de 30 dias y cada ano es de 365 dias.\n\n";
	
	int tdias,ano,mes,dia;
	
	cout<<"Digite los dias totales a calcular desde 01/01/2000: ";cin>>tdias;
	
	calc_anos(tdias,ano,mes,dia);
	
	cout<<"\nLa fecha del total de dias digitados despues del 01/01/2000 es: "<<dia+1<<"/"<<mes+1<<"/"<<ano+2000<<endl;
	
	getch();
	return 0;
}


void calc_anos(int tdias,int& ano, int& mes, int& dia){
	
	ano=tdias/365;
	tdias%=365;
	mes=tdias/30;
	tdias%=30;
	dia=tdias%30;
	
}


