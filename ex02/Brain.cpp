#include "Brain.hpp"

Brain::Brain(){
	std::cout << "A Brain just appeared" << std::endl;
}

Brain::Brain(const Brain& copy){
	*this = copy;
	std::cout << "A Brain just appeared" << std::endl;
}

Brain::~Brain(){
	std::cout << "A Brain just disappeared" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs){
	int		i = 0;

	while (i < 100){
		ideas[i] = rhs.ideas[i];
		i++;
	}
	return (*this);
}