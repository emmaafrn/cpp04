#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << "A cat just arrived here" << std::endl;
}

Cat::Cat(const Cat& old){
	*this = old;
	std::cout << "A cat just arrived here" << std::endl;
}

Cat::~Cat(){
	std::cout << "A cat just left" << std::endl;
}

void	Cat::makeSound(void) const{
	std::cout << "* cat sound *" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs){
	type = rhs.type;
	return (*this);
}
