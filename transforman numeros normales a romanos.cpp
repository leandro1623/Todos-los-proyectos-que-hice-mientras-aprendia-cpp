#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int num,unidad,decenas,centenas,millar;
	
	cout<<"Digite el numero: ";cin>>num;
	
	cout<<"\n\n\n";
	cout<<"pasados a numeros romanos es: ";
	
	unidad = num%10; num /=10;
	decenas = num%10; num/=10;
	centenas = num%10; num/=10;
	millar = num%10; num/=10;
		
	switch(millar){
		case 1:cout<<"M";break;
		case 2:cout<<"MM";break;
		case 3:cout<<"MMM";break;
	
	
	}
	
	switch(centenas){
		case 1:cout<<"C";break;
		case 2:cout<<"CC";break;
		case 3:cout<<"CCC";break;
		case 4:cout<<"CD";break;
		case 5:cout<<"D";break;
		case 6:cout<<"DC";break;
		case 7:cout<<"DCC";break;
		case 8:cout<<"DCCC";break;
		case 9:cout<<"CM";break;
	}
	
	switch(decenas){
		case 1:cout<<"x";break;
		case 2:cout<<"xx";break;
		case 3:cout<<"xxx";break;
		case 4:cout<<"XL";break;
		case 5:cout<<"L";break;
		case 6:cout<<"LX";break;
		case 7:cout<<"LXX";break;
		case 8:cout<<"LXXX";break;
		case 9:cout<<"XC";break;
	}
	
	switch(unidad){
		case 1:cout<<"I ";break;
		case 2:cout<<"II";break;
		case 3:cout<<"III";break;
		case 4:cout<<"IV";break;
		case 5:cout<<"V";break;
		case 6:cout<<"VI";break;
		case 7:cout<<"VII";break;
		case 8:cout<<"VIII";break;
		case 9:cout<<"IX";break;
	}
	
	cout<<"\n\n\n";

	getch();
	return 0;
}
