#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

}

WrongAnimal::WrongAnimal(const WrongAnimal& old){
	*this = old;
}

WrongAnimal::~WrongAnimal(){

}

void	WrongAnimal::makeSound(void) const{
	std::cout << "* WrongAnimal sound *" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs){
	type = rhs.type;
	return (*this);
}
