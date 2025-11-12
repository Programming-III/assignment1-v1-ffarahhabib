
#ifndef UNTITLED3_ANIMAL_H
#define UNTITLED3_ANIMAL_H
#include <string>

class Animal {
private:
    string name;
    int age;
    bool isHungry;
public:
     Animal();
    Animal(string n, int a, bool isHungry );
    void display();
    void feed();
    void setAge(int a);
    void setHungry();
    void setName();
    string getName();
    int getAge();
    int getHungry();
    ~Animal();
};
#endif //UNTITLED3_ANIMAL_H
