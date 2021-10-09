#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	char x;
	
	cout<<"Digite una vocal: ";cin>>x;
	
	switch(x){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"\n\nLa vocal es minuscula.";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<"\n\nLa vocal es mayuscula.";break;
		default :cout<<"\n\nNo es una vocal.";break;
	}
	
	getch();
	return 0;
}
