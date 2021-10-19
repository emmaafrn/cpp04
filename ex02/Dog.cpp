#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	_brain = new Brain();
	std::cout << "A dog just arrived here" << std::endl;
}

Dog::Dog(const Dog& old){
	type = old.type;
	_brain = old._brain;
	std::cout << "A dog just arrived here" << std::endl;
}

Dog::~Dog(){
	delete _brain;
	std::cout << "A dog just left" << std::endl;
}

void	Dog::makeSound(void) const{
	std::cout << "* dog sound *" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs){
	type = rhs.type;
	return (*this);
}
