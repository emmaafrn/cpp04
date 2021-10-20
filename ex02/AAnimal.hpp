#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
protected:
std::string	type;
public:
	Animal();
	Animal(const Animal& old);
	virtual ~Animal();
virtual void		makeSound(void) const = 0;
std::string			getType(void) const;
Animal				&operator=(const Animal &rhs);
};

#endif