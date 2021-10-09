#include<iostream>
#include<cstdlib>
#include<conio.h>

void strre(char *palabra);//revertir cadena


int main(){
	char palabra[]="hello world";//palabra
	strre(palabra);//revirtiendo palabra
	std::cout<<palabra<<std::endl;//mostrando cadena

	
	//fin
	getch();
	return 0;
}

void strre(char *palabra){
	int *n=new int;
	char aux;
	int i=0;
	while(*(palabra+i)!='\0'){//buscando tamano de cadena
		i++;
	}
	
	*n=i-1;//ultima posicion de la palabra
	int sup=*n;
	for(int i=0;i<sup;i++){//cambiando palabra
		aux=*(palabra+i);
		*(palabra+i)=*(palabra+sup);
		*(palabra+sup)=aux;
		sup--;
	}
}