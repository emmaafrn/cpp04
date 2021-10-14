#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& old){
	type = old.type;
	_brain = old._brain;
}

Cat::~Cat(){
	delete _brain;
}

void	Cat::makeSound(void) const{
	std::cout << "* cat sound *" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs){
	type = rhs.type;
	return (*this);
}
