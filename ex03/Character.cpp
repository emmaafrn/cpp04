#include "Character.hpp"

Character::Character(){
	i = 0;
	inventory = new AMateria*[4];
}

Character::~Character(){
	delete [] inventory;
}

const std::string &Character::getName() const{
	return (name);
}

void	Character::equip(AMateria *m){
	if (i <= 3 && m != NULL){
		inventory[i] = m;
		if (i < 3)
			i++;
	}
}

void	Character::unequip(int idx){
	if (i > 0){
		inventory[i] = NULL;
		i--;
	}
}

void	Character::use(int idx, ICharacter& target){
	
}
