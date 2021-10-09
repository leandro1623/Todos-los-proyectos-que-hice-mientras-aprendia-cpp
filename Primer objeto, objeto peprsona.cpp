#include<iostream>
#include<stdlib.h>

class persona{
	private:
		int edad;
		std::string nombre;
		std::string cedula;
	public:
		void set_name(std::string nombreU){
				nombre=nombreU;	
		}
		void set_age(int edadU){
			edad=edadU;
		}
		void set_idCard(std::string idCard){
				cedula=idCard;
		}
		void get_name(){
				std::cout<<nombre<<std::endl;
		}
		int get_age(){
			return edad;
		}
		void get_idCard(){
				std::cout<<cedula<<std::endl;
		}
		std::string talk(){
			return "hello, how are you?\n";
		}
};



int main(){
	persona persona1;
	persona1.set_name("leandro");
	persona1.set_age(19);
	persona1.set_idCard("40218649990");
	std::cout<<persona1.talk();
	persona1.get_name();
}