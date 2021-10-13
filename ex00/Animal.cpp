#include "Animal.hpp"

Animal::Animal(){

}

Animal::~Animal(){

}

void	Animal::makeSound(void) const{
	std::cout << "* animal sound *" << std::endl;
}

std::string	Animal::getType(void) const{
	return (type);
}

