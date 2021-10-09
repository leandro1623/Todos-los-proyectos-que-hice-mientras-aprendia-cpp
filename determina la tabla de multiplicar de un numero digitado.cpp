#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	int num,i = 1,alt;
	
	do{
	cout<<"Digite un numero entre [1-10]: ";cin>>num;
	}while((num < 1) || (num > 10));
	 
 
		if(num <=10){
		 cout<<"\n\n";
		 cout<<"\tSu tabla de multiplicar es: "<<"\n\n";
	 
			while(i <= 12){
			alt = num * i;
			cout<<"\t\t"<<num<<" x "<<i<<" ="<<alt<<endl;
			i++;
			}
		
     	}
		else{
			cout<<"\tEl numero digitado no esta entre [1-10]."<<endl;
		}

	
	system("pause");
	return 0;
}
