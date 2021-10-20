#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public virtual Animal{
private :
Brain	*_brain;
public:
	Cat();
	Cat(const Cat& old);
	virtual ~Cat();
void	makeSound(void) const;
Cat		&operator=(const Cat &rhs);

};



#endif