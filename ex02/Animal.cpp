#include "Animal.hpp"

Animal::Animal(){

}

Animal::Animal(const Animal& old){
	
}

Animal::~Animal(){

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
