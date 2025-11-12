//
// Created by Farah Habib on 12/11/2025.
//

#ifndef UNTITLED3_REPTILE_H
#define UNTITLED3_REPTILE_H
#include <__fwd/string.h>

class Reptile:public Animal {
private:
    bool isVenomous;
    public:
    Reptile();
    Reptile(bool isVenomous);
    ~Reptile();
};
#endif //UNTITLED3_REPTILE_H
