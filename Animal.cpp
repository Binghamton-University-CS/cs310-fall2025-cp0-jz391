#include "Animal.h"
#include <iostream>

#include <string>
Animal::Animal(std::string s, unsigned int y) {
	species = s;
	year_discovered = y;

}

void Animal::display() {
	std::cout << species << " [" << year_discovered << "]" << std::endl;
}


