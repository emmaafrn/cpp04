#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
}

Dog::~Dog(){

}

void	Dog::makeSound(void) const{
	std::cout << "* dog sound *" << std::endl;
}
