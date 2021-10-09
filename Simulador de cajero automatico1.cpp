#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	 cout<<"------------BANCO LEANDRO ASOCIATION-----------"<<endl;
	 
	 int menu,saldo=1000,saldo2;
	 
	 cout<<"1. Depositar ";
	 cout<<"\n2. Retirar ";
	 cout<<"\n3. Ver saldo actual ";
	 cout<<"\n4. Salir";
	 
	 
	 do{
	 	cout<<"\n\nDigite una opcion: ";
		  cin>>menu;
	 
	 

		 switch(menu){																						 //switch
	 	
		 	case 1:                                                    									    //case 1
		 		cout<<"\n\nCuanto desea depositar: ";
		 		cin>>saldo2;
		 		saldo += saldo2;
		 		cout<<"\nSu saldo actual ahora es: "<<saldo;
			  break;
			  
		 	case 2: 																					  //case 2
		 	int retirar;
		 	cout<<"\n\nCuanto desea retirar: ";
		 	cin>>retirar;
		 		if(retirar > saldo){								 											//if
		 			cout<<"\nUsted no posee esta catidad de dinero, su dinero actual es: "<<saldo;
		 			cout<<"\n\n";
		 		}
		 	else{																							//else
		 		saldo -= retirar;
		 		cout<<"\nUsted retiro: "<<retirar<<endl<<"\nSu saldo actual es: "<<saldo;
			 }	
			 break;
			 
		 	case 3:                                               									      //case 3
		 		cout<<"\n\nSu saldo actual es de: "<<saldo;
			  break;
			  
		 	case 4: break;                                      									       //case 4
		 	
		 	default:                                             										     //default
		 		cout<<"\n\nLa opcion digitada no es valida, porfavor digite otra opcion.";
			  break;
		 }
	}while(menu != 4);
	
	system("pause");
	return 0;
	
}














