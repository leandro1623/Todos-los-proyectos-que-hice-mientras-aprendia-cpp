#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int vector[5],mayor;
	
	for(int i=0;i<5;i++){
		cout<<"Digite un numero: ";cin>>vector[i];
	}
	
	for(int i=5;i>0;i--){
		if(mayor<vector[i-1]){
			mayor=vector[i-1];
		}
	}
	
	cout<<"\n\tEl mayor numero del vector es: "<<mayor;
	
	return 0;
}
