#include<iostream>
#include<conio.h>
using namespace  std;;


int main(){
	int n,*d_n,cont;
	cout<<"Digite un numero: ";cin>>n;
	d_n=&n;
	
	for(int i=1;i<=*d_n;i++){
		if(*d_n%i==0){
			cont++;
		}
	}
	
	if(cont>2){
		cout<<"\nEl numero "<<*d_n<<" no es primo.";
		cout<<"\nDireccion: "<<d_n<<endl;
	}
	else{
		cout<<"\nEl numero "<<*d_n<<" es primo.";
		cout<<"\nDireccion: "<<d_n<<endl;
	}
	
	
	getch();
	return 0;
}