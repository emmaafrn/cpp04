#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter{
private :
int			_i;
std::string	_name;
AMateria	*_inventory[4];
public:
	Character(std::string name);
	virtual ~Character();
virtual std::string const & getName() const;
virtual void equip(AMateria* m);
virtual void unequip(int idx);
virtual void use(int idx, ICharacter& target);
};

#endif