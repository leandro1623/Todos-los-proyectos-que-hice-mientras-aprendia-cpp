#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	
	int arr[]={1,2,3,4,5};
	int *x=arr;
	
	cout<<"Digite: ";
	cin>>*x;
	for(int i=0;i<5;i++){
		cout<<*x++;
	}
	
	getch();
	return 0;
}