
#ifndef UNTITLED3_MAMMAL_H
#define UNTITLED3_MAMMAL_H
#include <string>

class Mammmal:public Animal {
    private:
    string furColor;
public:
    Mammmal();
    Mammmal(string furColor);
    ~Mammmal();
};
#endif //UNTITLED3_MAMMAL_H
