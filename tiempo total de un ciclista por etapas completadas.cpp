#include<iostream>
#include<conio.h>
using namespace std;

struct etapa{
	int horas,minutos,segundos;
}etapa[999];


int main(){
	int n_etapas,dias=0,h=0,m=0,s=0;//variableas para el total de etapas y de dias
	cout<<"Cuantas etapas desea calcular: ";cin>>n_etapas;//cantidad de etapas completadas
	for(int i=0;i<n_etapas;i++){//tomando datos de cada etapa
		cout<<"\n.:ETAPA #"<<i+1<<":.\n";
		cout<<"\nCuantas horas usted se tomo: ";cin>>etapa[i].horas;//horas
		cout<<"\nCuantos minutos usted se tomo: ";cin>>etapa[i].minutos;//minutos
		cout<<"\nCuantos segundos usted se tomo: ";cin>>etapa[i].segundos;//segundos
		s+=etapa[i].segundos;//buscand el total de h,m,s por todas la etapas
		m+=etapa[i].minutos;
		h+=etapa[i].horas;
		cout<<"\n";
		
		if(s>59){
			s-=60;
			m+=1;
		}
		if(m>59){
			m-=60;
			h+=1;
		}
		if(h>23){
			h-=24;
			dias+=1;
		}
		
	}
	

	//mostrando el total de d,h,m,s
	cout<<"\n\nEl total corriendo en formato ~d/h/m/s~ es: "<<dias<<"/"<<h<<"/"<<m<<"/"<<s<<endl;
	//fin	
	getch();
	return 0;
}