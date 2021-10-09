#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	float xz=5000,h,r;
	
	cout<<"Digite un numero: ";
	cin>>h;
	
	for(int i=5;i<0;i--){
		r=h*xz;
		cout<<h<<" X "<<xz<<"= "<<r<<endl;
	}
	
	
	
	getch();
	return 0;
}
