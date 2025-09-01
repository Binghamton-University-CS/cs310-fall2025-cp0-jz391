#include <iostream>
#include <stdlib.h>
#include "Animal.h"

using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   
   Animal* animal3 = new Animal("egg", 1287);
   animal3->display();

   delete animal3;
   delete animal1;
}
