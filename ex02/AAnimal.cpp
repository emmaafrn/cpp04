#include "AAnimal.hpp"

Animal::Animal(){
	std::cout << "An animal just arrived here" << std::endl;
}

Animal::Animal(const Animal& old){
	*this = old;
	std::cout << "An animal just arrived here" << std::endl;
}

Animal::~Animal(){
std::cout << "An animal just left" << std::endl;
}

void	Animal::makeSound(void) const{
	std::cout << "* animal sound *" << std::endl;
}

std::string	Animal::getType(void) const{
	return (type);
}

Animal	&Animal::operator=(const Animal &rhs){
	type = rhs.type;
	return (*this);
}
