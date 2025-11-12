
#ifndef UNTITLED3_ENCLOSURE_H
#define UNTITLED3_ENCLOSURE_H
#include "Animal.h"

class Enclosure {
private:
  int capacity;
  int currentCount;
  Animal *a;
  public:
  Enclosure();
  Enclosure(int capacity, int currentCount);
  void addAnimal(Animal *a);
  void displayAnimals();
  ~Enclosure();
};
#endif //UNTITLED3_ENCLOSURE_H
