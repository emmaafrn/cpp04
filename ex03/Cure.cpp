#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){

}

Cure::~Cure(){

}

Cure*	Cure::clone() const{
	Cure*	clone = new Cure();

	return (clone);
}

