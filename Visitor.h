//
// Created by Farah Habib on 12/11/2025.
//

#ifndef UNTITLED3_VISITOR_H
#define UNTITLED3_VISITOR_H
#include <__fwd/string.h>

class Visitor {
    private:
    string visitorName;
    int ticketsBought;
    public:
    Visitor();
    Visitor(string visitorName, int ticketsBought);
    virtual ~Visitor();
    void displayInfo();
};
#endif //UNTITLED3_VISITOR_H
