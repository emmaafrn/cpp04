#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public virtual Animal{
private :
Brain	*_brain;
public :
	Dog();
	Dog(const Dog& old);
	virtual ~Dog();
virtual void	makeSound(void) const;
Dog				&operator=(const Dog &rhs);

};

#endif