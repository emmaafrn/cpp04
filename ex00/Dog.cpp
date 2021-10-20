#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << "A dog just arrived here" << std::endl;
}

Dog::Dog(const Dog& old){
	*this = old;
	std::cout << "A dog just arrived here" << std::endl;
}

Dog::~Dog(){
	std::cout << "A dog just left" << std::endl;
}

void	Dog::makeSound(void) const{
	std::cout << "* dog sound *" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs){
	type = rhs.type;
	return (*this);
}
