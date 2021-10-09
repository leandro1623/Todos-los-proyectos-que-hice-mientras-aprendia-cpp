#include<iostream>
#include<iomanip>

class hola{
	friend void cambio(hola &,int);
	private:
	int x=34;
	public:
		
		void show(){
			std::cout<<std::setw(5)<<x<<"\n";
		}
		~hola(){
			
		}
};


void cambio(hola &y,int x){
	y.x=x;
}

int main(){
	
	hola x;
	
	x.show();
	
	return 0;
}