#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// Animal *animal = new Animal();

	delete j;//should not create a leak
	delete i;
}