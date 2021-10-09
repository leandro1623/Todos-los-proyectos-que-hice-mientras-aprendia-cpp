#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;


int main(){
	
	int opc,pares;
	float numero,x;
	
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero Par o impar"<<endl;
	cout<<"3. salir"<<endl;
	cout<<"Digite opcion: ";cin>>opc;
	cout<<"\n\n";
	
	switch(opc){																			//switch
		
		case 1:																				//case 1
			cout<<"Digite el numero: ";cin>>x;
			numero = pow(x,2);
			cout<<"El cubo del nuemero digitado es: "<<numero<<endl;
		break;
		
		case 2:																				//case 2
		cout<<"Digite el numero: ";cin>>pares;
		
		if(pares%2 == 0){																	//if 
			cout<<"El numero digitado es par."<<endl;
		}
		else{																				//else
			cout<<"El numero digitado es impar."<<endl;
		}
		break;
		
		case 3:																				//case 3
		break;
		
		default:cout<<"\n\nLa opcion digitada no es valida\n\n";							//default
	}
	
	getch();
	return 0;
}
