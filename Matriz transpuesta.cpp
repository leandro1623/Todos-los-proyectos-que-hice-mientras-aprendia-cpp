#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"\nMatriz normal\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\nMatriz transpuesta\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[j][i];
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
