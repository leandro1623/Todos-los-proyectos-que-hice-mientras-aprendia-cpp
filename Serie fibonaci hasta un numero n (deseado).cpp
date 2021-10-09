#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	cout<<"\t\tSERIE FIBONACCI "<<"\n\n";
	
	long long x=0,y=1,z=0;
	int n;
	
	cout<<"Digite hasta que numero: ";cin>>n;
	cout<<"La serie fibonaci: "<<1<<" ";
	for(int i = 1;i<n;i++){
		z=x+y;
		x=y;
		y=z;
		cout<<z<<" "; 
	}
	
	cout<<endl<<endl;
	
	system("pause");
	return 0;
}
