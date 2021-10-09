#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int arr[5]={1,2,3,4,5};
	long  multiplicacion = 1;
	
	for(int i=0;i<5;i++){
		multiplicacion *= arr[i];
	}
	
	cout<<"El resultado es: "<<multiplicacion<<endl;	
	
	getch();
	return 0;
}
