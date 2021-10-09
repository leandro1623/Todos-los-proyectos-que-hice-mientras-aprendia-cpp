#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int matriz1[2][2]={{1,2},{3,4}}, matriz2[2][2];
	
	//copiando matriz1 en matriz2
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
	
	//mostrando matriz2
		for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matriz2[i][j] ;
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
