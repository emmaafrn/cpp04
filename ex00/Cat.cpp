#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
}

Cat::Cat(const Cat& old){
	type = old.type;
}

Cat::~Cat(){

}

void	Cat::makeSound(void) const{
	std::cout << "* cat sound *" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs){
	type = rhs.type;
	return (*this);
}
