#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int num,fact=1;
	
	cout<<"\tDigite el numero a sacar el factorial: ";cin>>num;
	
	for(int i=1;i<=num;i++){
		fact*=i;
	}
	
	cout<<"\n\n\tEl factorial de("<<num<<") es: "<<fact<<endl<<endl;
	
	system("pause");
	return 0;
}
