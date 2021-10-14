#include "Brain.hpp"

Brain::Brain(){
	
}

Brain::Brain(const Brain& copy){

}

Brain::~Brain(){

}

Brain	&Brain::operator=(const Brain &rhs){
	int		i = 0;

	while (i < 100){
		ideas[i] = rhs.ideas[i];
		i++;
	}
	return (*this);
}