#include<iostream>
#include<conio.h>
using namespace std;

int fibonacci(int);


int main(){
	int x=10;
	cout<<"Serie fibonacci: ";
	for(int i=0;i<10;i++){
	cout<<fibonacci(i)<<", ";
	}
	
	getch();
	return 0;
}

int fibonacci(int x){
	if(x<2){
		return x;
	}
	else{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}