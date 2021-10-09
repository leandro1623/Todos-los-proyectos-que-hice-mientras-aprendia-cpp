#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	int n,factorial=1,sum_Fact=0;
	
	cout<<"Digite la cantidad de factoriales de desea sumar: ";cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial*=i;
		sum_Fact+=factorial;
	}
	
	cout<<"\n\t La suma de factoriales es: "<<sum_Fact<<endl;
	
	
	system("pause");
	return 0;
}
