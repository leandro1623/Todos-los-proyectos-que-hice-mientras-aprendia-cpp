#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	
	double a,b,c,x1 = 0,x2 = 0, aparte=0, raiz;
	
	cout<<"\t\t\n**Solucion de ecuaciones de segundo grado**\n\n";
	cout<<"\nEjemplo: ax^2+bx+c+=0 \n\n";
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"\nDigite el valor de b: ";cin>>b;
	cout<<"\nDigite el valor de c: ";cin>>c; 
	
	aparte += b*b - 4*a*c;
	raiz = sqrt (aparte);
	
		if(b*b>=4*a*c){
			x1 = -b + raiz / 2*a;
			x2 = -b - raiz / 2*a;
	}
	 if(b*b < 4*(a*c)){
		cout<<"Raiz negativa";
		
	}
	
	cout<<4*(a*c);
	cout<<"\n\n\nEl resultado de x1 = "<<x1;
	cout<<"\n\n\nEl resultado de x2 = "<<x2;
	
	getch();
	return 0;
}


