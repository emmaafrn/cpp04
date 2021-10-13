#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class	Dog : public virtual Animal{
public :
	Dog();
	~Dog();
virtual void	makeSound(void) const;
};

#endif