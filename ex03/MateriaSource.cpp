#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource(){
	_i = 0;
}

MateriaSource::~MateriaSource(){

}

void	MateriaSource::learnMateria(AMateria* m){
	if (_i <= 3 && m != NULL){
		_sources[_i] = m;
		if (_i < 3)
			_i++;
	}
	else
		delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	if (type == "cure")
		return (new Cure());
	else if (type == "ice")
		return (new Ice());
	return (NULL);
}
