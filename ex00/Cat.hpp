#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public virtual Animal{
public:
	Cat();
	Cat(const Cat& old);
	~Cat();
void	makeSound(void) const;
Cat		&operator=(const Cat &rhs);

};



#endif