#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"
class AnimalsInZoo {
	public:
		AnimalsInZoo(Animal a);
		AnimalsInZoo();

		void display();

	private:
		Animal animal;
		int numAnimals;
};



#endif
