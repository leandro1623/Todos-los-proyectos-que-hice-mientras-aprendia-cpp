#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int a,b,c,x;
	
	cout<<"Digite un numero: ";cin>>a;
	cout<<"\nDigite un numero: ";cin>>b;
	cout<<"\nDigite un numero: ";cin>>c;
	cout<<"\nDigite el numero a comparar con los anteriormente introducidos: ";cin>>x;
	
	if(x == a || x == b || x == c){
		cout<<"\n\nSi coincide con alguno de los intrducidos anteriormente\n\n.";
	}
	else {
		cout<<"\n\nNo coincide con ninguno de los intrducidos anteriormente.\n\n";
	}
	
	getch();
	return 0;
}
