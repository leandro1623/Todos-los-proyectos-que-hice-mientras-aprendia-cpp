#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	long long arr[5];
	
	for(int i=0;i<5;i++){
		cout<<"Digite un numero: ";
		cin>>arr[i];
	}
	cout<<"\n\n";
	for(int i=4;i>=0;i--){
		cout<<"Posicion en la que esta gradada el numero en el arreglo "<<i<<" --> "<<arr[i]<<endl;
	}
	
	system("pause");
	return 0;
}
