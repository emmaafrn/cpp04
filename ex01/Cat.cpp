#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	_brain = new Brain();
	std::cout << "A cat just arrived here" << std::endl;
}

Cat::Cat(const Cat& old){
	_brain = new Brain();
	type = old.type;
	_brain = old._brain;
	std::cout << "A cat just arrived here" << std::endl;
}

Cat::~Cat(){
	delete _brain;
	std::cout << "A cat just left" << std::endl;
}

void	Cat::makeSound(void) const{
	std::cout << "* cat sound *" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs){
	type = rhs.type;
	_brain = new Brain();
	_brain = rhs._brain;
	return (*this);
}
