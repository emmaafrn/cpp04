#include "Character.hpp"

Character::Character(std::string name){
	_i = 0;
	_name = name;

}

Character::~Character(){

}

const std::string &Character::getName() const{
	return (_name);
}

void	Character::equip(AMateria *m){
	if (_i <= 3 && m != NULL){
		_inventory[_i] = m;
		if (_i < 3)
			_i++;
	}
}

void	Character::unequip(int idx){
	if (idx <= _i && idx >= 0){
		while (idx < _i - 1){
			_inventory[idx] = _inventory[idx + 1];
			idx++;
		}
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target){
	if (idx < 4 && idx >= 0 && _inventory[idx]){
		_inventory[idx]->use(target);
	}
}
