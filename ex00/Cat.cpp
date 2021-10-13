#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
}

Cat::~Cat(){

}

void	Cat::makeSound(void) const{
	std::cout << "* cat sound *" << std::endl;
}
