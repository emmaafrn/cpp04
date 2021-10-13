#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
}

WrongCat::~WrongCat(){

}

void	WrongCat::makeSound(void) const{
	std::cout << "* WrongCat sound *" << std::endl;
}