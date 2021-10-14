#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& old){
	type = old.type;
	_brain = old._brain;
}

Dog::~Dog(){
	delete _brain;
}

void	Dog::makeSound(void) const{
	std::cout << "* dog sound *" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs){
	type = rhs.type;
	return (*this);
}
