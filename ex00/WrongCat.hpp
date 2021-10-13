#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
void	makeSound(void) const;
};

#endif