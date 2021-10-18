#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter{
private :
int			i;
std::string	name;
AMateria	**inventory;
public:
	Character();
	virtual ~Character();
virtual std::string const & getName() const;
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target);
};

#endif