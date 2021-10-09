#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	cout<<"\n\n\t**NOMINA DE PAGO**\n\n";
	
	//variables necesrias
	char nombre_empleado[30];
	char cedula[30],departamento[30];
	double sueldo_bruto,afp,ars,cooperativa,club,prestamos,total_descuento,sueldo_neto;
	
	
	//solicitando datos
	cout<<"Nombre del empleado: ";
	cin.getline(nombre_empleado,30,'\n');
	cout<<"\nCedula: ";
	cin.getline(cedula,30,'\n');
	cout<<"\nDepartamento: ";
	cin.getline(departamento,30,'\n');
	cout<<"\nSueldo bruto: ";
	cin>>sueldo_bruto;

	//condicional
	if(sueldo_bruto==45000){
		afp=sueldo_bruto*(2.87/100);
		ars=sueldo_bruto*(3.04/100);
		cooperativa=sueldo_bruto*(2/100);
		club=sueldo_bruto*(0.60/100);
		prestamos=sueldo_bruto*(1.3/100);
	}
	else{
		afp=sueldo_bruto*(2.87/100);
		ars=sueldo_bruto*(3.04/100);
		cooperativa=sueldo_bruto*(1.5/100);
		club=sueldo_bruto*(1/100);
		prestamos=sueldo_bruto*(1.8/100);
	}
	
	//sacando total de descuento y suedo neto
	total_descuento= afp+ars+cooperativa+club+prestamos;
	sueldo_neto= sueldo_bruto-total_descuento;
	
	//mostrando datos
	cout<<"------------------------------------------------"<<endl<<endl;
	
	cout<<"Nombre del empleado: "<<nombre_empleado<<endl;
	cout<<"\nCedula: "<<cedula<<endl;
	cout<<"\nDepartamento: "<<departamento<<endl;
	cout<<"\nSueldo bruto: "<<sueldo_bruto<<endl;
	cout<<"\nTotal de descuento: "<<total_descuento<<endl;
	cout<<"\nSueldo neto: "<<sueldo_neto<<endl;
	
	//fin del programa
	getch();
	return 0;
}
