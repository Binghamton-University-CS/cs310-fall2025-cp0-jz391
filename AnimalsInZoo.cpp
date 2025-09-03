#include "AnimalsInZoo.h"
#include "Animal.h"
#include <iostream>
#include <stdlib.h>

AnimalsInZoo::AnimalsInZoo(Animal a) {
	animal = a;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {}; 

void AnimalsInZoo::display() {
	std::cout << numAnimals << std::endl;
	if (numAnimals == 1) {
		animal.display();
	}
}
