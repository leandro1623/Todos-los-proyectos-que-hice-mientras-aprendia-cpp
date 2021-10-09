#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int arr[5]={1,2,3,4,5};
	int sum;
	
	for(int i=0;i<5;i++){
		sum += arr[i];
	}
	cout<<"La suma es: "<<sum;
	
	return 0;
}
