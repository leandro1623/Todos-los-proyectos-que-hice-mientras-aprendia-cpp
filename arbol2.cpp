#include<iostream>
#include<stdlib.h>

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

//prototipos de funcion
void menu();
Nodo *crear_nodo(int,Nodo *);
void insertar_nodo(Nodo *&,int,Nodo *);
void mostrar_arbol(Nodo *,int);
bool busqueda(Nodo *,int);
void mostrar_preOrden(Nodo *);
void mostrar_inOrden(Nodo *);
void mostrar_postOrden(Nodo *);
void eliminar(Nodo *&,int);
Nodo *minimo(Nodo *);
void eliminar_nodo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruir(Nodo *);

Nodo *arbol=NULL;

int main(){
	menu();
}

//menu del programa
void menu(){
	char opc;
	int dato,cont=0;
	do{
		system("cls");
		std::cout<<"\t.:MENU:.\n";
		std::cout<<"\n1. Ingresar un numero en el arbol";
		std::cout<<"\n2. Mostrar el arbol";
		std::cout<<"\n3. buscar un numero en el arbol";
		std::cout<<"\n4. Mostrar el arbol en pre-orden";
		std::cout<<"\n5. Mostra en in-Orden";
		std::cout<<"\n6. Mostrar en pos-Orden";
		std::cout<<"\n7. Eliminar un dato del arbol";
		std::cout<<"\n8. Salir";
		std::cout<<"\nDigite una opcion: ";std::cin>>opc;
		
		switch(opc){
			case '1': std::cout<<"\nDigite un numero: ";std::cin>>dato;insertar_nodo(arbol,dato,NULL);break;
			case '2': mostrar_arbol(arbol,cont);break;
			case '3': std::cout<<"\nDigite el numero: ";std::cin>>dato;if(busqueda(arbol,dato)==true)std::cout<<"\nDato encontrado\n\n";else std::cout<<"\nEl dato NO existe\n\n"; break;
			case '4': if(arbol==NULL)std::cout<<"\nEl arbol esta vacio";else mostrar_preOrden(arbol);break;
			case '5': mostrar_inOrden(arbol);break;
			case '6': mostrar_postOrden(arbol);break;
			case '7': std::cout<<"\nDigite el elemento: ";std::cin>>dato;eliminar(arbol,dato);break;
			case '8': std::cout<<"\n--PROGRAMA FINALIZADO--\n\n";break;
			default: std::cout<<"\n~~OPCION INVALIDA~~";break;
		}
		std::cout<<"\n\n";
		system("pause");
	}while(opc!='8');
}

//crea un nodo en el heap
Nodo *crear_nodo(int dato,Nodo *padre){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=dato;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	nuevo_nodo->padre=padre;
	return nuevo_nodo;
}

//ingresa un dato en el arbol
void insertar_nodo(Nodo *&arbol,int dato,Nodo *padre){
	if(arbol == NULL){
		Nodo *nuevo_nodo=crear_nodo(dato,padre);
		arbol=nuevo_nodo;
	}
	else{
		int raizDelArbol=arbol->dato;
		if(dato < raizDelArbol){
			insertar_nodo(arbol->izq,dato,arbol);
		}
		else{
			insertar_nodo(arbol->der,dato,arbol);
		}
	}
}

//muestra el arbol completo
void mostrar_arbol(Nodo *arbol,int cont){
	if(arbol == NULL){
		return;
	}
	else{
		mostrar_arbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			std::cout<<"   ";
		}
		std::cout<<arbol->dato<<std::endl;
		mostrar_arbol(arbol->izq,cont+1);
	}
}

//busca un dato en el arbol
bool busqueda(Nodo *arbol,int dato){
	if(arbol==NULL){
		return false;
	}
	else if(arbol->dato==dato){
		return true;
	}
	else if(dato < arbol->dato){
		return busqueda(arbol->izq,dato);
	}
	else{
		return busqueda(arbol->der,dato);
	}
}

//muestra el arbol preOrden la raiz de primero
void mostrar_preOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		std::cout<<arbol->dato<<" -> ";
		mostrar_preOrden(arbol->izq);
		mostrar_preOrden(arbol->der);
	}
}

//muestra la lista en in_Orden de menor a mayor
void mostrar_inOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		mostrar_inOrden(arbol->izq);
		std::cout<<arbol->dato<<"-";
		mostrar_inOrden(arbol->der);
	}
}

//muestra el arbol en post_orden la raiz de ultimo
void mostrar_postOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		mostrar_postOrden(arbol->izq);
		mostrar_postOrden(arbol->der);
		std::cout<<arbol->dato<<" ";
	}
}

//busca lo mas izq posible
Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){//si esta vacio
		return NULL;
	}
	else if(arbol->izq){//si hay mas a la izq
		return minimo(arbol->izq);
	}
	else{//si o encontraste
		return arbol;
	}
}

//eliminar el elemento del arbol
void eliminar(Nodo *&arbol,int dato){
	if(arbol==NULL){//si el arbol esta vacio
		return;
	}
	else if(dato < arbol->dato){//si el dato esta a la izquierda
		eliminar(arbol->izq,dato);
	}
	else if(dato > arbol->dato){//si esta a la derecha
		eliminar(arbol->der,dato);
	}
	else{//si lo encontraste
		eliminar_nodo(arbol);
	}
	
}

//elimina un nodo
void eliminar_nodo(Nodo *nodoEliminar){
	if(nodoEliminar->der && nodoEliminar->izq){//si tiene dos hijos
		Nodo *menor=minimo(nodoEliminar);
		nodoEliminar->dato=menor->dato;
		eliminar_nodo(menor);
	}
	else if(nodoEliminar->izq){//si tienen hijo izq
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruir(nodoEliminar);
	}
	else if(nodoEliminar->der){//si tiene hijo der
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruir(nodoEliminar);
	}
	else{//si no tiene hijos
		reemplazar(nodoEliminar,NULL);
		destruir(nodoEliminar);
	}
}

//reemplaza un nodo 
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
	if(arbol->padre){//si tiene padre
		if(arbol->dato==arbol->padre->izq->dato){
			arbol->padre->izq=nuevoNodo;
		}
		else if(arbol->dato=arbol->padre->der->dato){//comprobando si es su padre
			arbol->padre->der=nuevoNodo;
		}
	}
	if(nuevoNodo){//comprobando si existe
		nuevoNodo->padre=arbol->padre;
	}
}

//destruye un nodo
void destruir(Nodo *nodo){
	nodo->der=NULL;
	nodo->izq=NULL;
	nodo->padre=NULL;
	delete nodo;
}