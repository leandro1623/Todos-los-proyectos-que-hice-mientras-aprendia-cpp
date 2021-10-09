#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	double xz=5000,h,r;
	
	cout<<"Digite un numero: ";
	cin>>h;
	
	for(xz;xz>=0;xz--){
		r=h*xz;
		cout<<h<<" X "<<xz<<"= "<<r<<endl;
	}
	
	
	
	getch();
	return 0;
}
