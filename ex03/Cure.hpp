#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include <string>
#include <iostream>

class	Cure : public AMateria{
public :
	Cure();
	~Cure();
	virtual Cure* clone() const;
};


#endif
