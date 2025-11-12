

#ifndef UNTITLED3_BIRD_H
#define UNTITLED3_BIRD_H
#include <string>

class Bird:public Animal {
private:
    float wingSpan;
    public:
    Bird();
    Bird(float wingSpan);
    ~Bird();
};
#endif //UNTITLED3_BIRD_H
