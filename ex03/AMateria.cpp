#include "AMateria.hpp"

AMateria::AMateria(std::string const & _type){
	
}

AMateria::~AMateria(){

}

void	AMateria::use(ICharacter& target){
	if (type == "cure")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (type == "ice")
		std::cout << "* heals " << target.getName() << " 's wounds *" << std::endl;
}
