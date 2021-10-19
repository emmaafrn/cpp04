#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	_brain = new Brain();
	std::cout << "A dog just arrived here" << std::endl;
}

Dog::Dog(const Dog& old){
	*this = old;
	std::cout << "A dog just arrived here" << std::endl;
}

Dog::~Dog(){
	std::cout << "A dog just left" << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const{
	std::cout << "* dog sound *" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs){
	type = rhs.type;
	_brain = new Brain(*rhs._brain);
	return (*this);
}
