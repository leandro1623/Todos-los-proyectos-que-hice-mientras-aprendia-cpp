#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	float n1,n2,n3;
	
	cout<<"Digite el primer numero: ";cin>>n1;
	cout<<"\nDigite el segundo numero: ";cin>>n2;
	cout<<"\nDigite el tercer numero: ";cin>>n3;
	
	//acciones 
	
	if(n1 > n2 && n1 > n3){
		cout<<"\n\nEl numero "<<n1<<" es mas grande que "<<n2<<" y que "<<n3<<endl;
	}
	else{
		if(n2 > n1 && n2 > n3){
			cout<<"\n\nEl numero "<<n2<<" es mas grande que "<<n1<<" y que "<<n3<<endl;
		}
		else{
			if(n3 > n1 && n3 > n2){
				cout<<"\n\nEl numero "<<n3<<" es mas grande que "<<n1<<" y que "<<n2<<endl;
			}
		}
	}
	
	
	cout<<"\n\nGracias por usar este programa."<<"\n\n";
	
	getch();
	return 0;
}
