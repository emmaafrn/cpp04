#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& old){
	type = old.type;
}

WrongCat::~WrongCat(){

}

void	WrongCat::makeSound(void) const{
	std::cout << "* WrongCat sound *" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs){
	type = rhs.type;
	return (*this);
}
