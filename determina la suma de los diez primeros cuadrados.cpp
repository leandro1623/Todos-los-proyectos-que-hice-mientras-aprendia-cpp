/*3. Realice un programa que calcule y muestre en la salida estándar la suma de 
los cuadrados de los 10 primeros enteros mayores que cero.*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;


int main(){
	
	int pass,suma=0;
	
	for(int i=1;i<=10;i++){
		pass = pow(i,2);
		
		suma += pass;
		
	}
	
	cout<<"La suma de los diez primeros cuadrdo es: "<<suma;
	
	
	getch();
	return 0;
}
