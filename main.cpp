#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal() {
        name = "unknown";
        age = 0;
        isHungry = false;
    }

    Animal(string n, int a, bool h) {
        name = n;
        age = a;
        isHungry = h;
    }

    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setHungry(bool h) {
        isHungry = h;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    bool getHungry() {
        return isHungry;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Hungry: " << (isHungry ? "Yes" : "No") << endl;
    }

    void feed() {
        if (isHungry)
            cout << name << " is hungry." << endl;
        else
            cout << name << " is not hungry." << endl;
    }
};

class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal() { furColor = "unknown"; }
    Mammal(string n, int a, bool h, string f) : Animal(n, a, h) { furColor = f; }

    void display() {
        Animal::display();
        cout << "Fur Color: " << furColor << endl;
    }
};

class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird() { wingSpan = 0; }
    Bird(string n, int a, bool h, float w) : Animal(n, a, h) { wingSpan = w; }

    void display() {
        Animal::display();
        cout << "Wing Span: " << wingSpan << endl;
    }
};

class Reptile : public Animal {
private:
    bool isVenomous;

public:
    Reptile() { isVenomous = false; }
    Reptile(string n, int a, bool h, bool v) : Animal(n, a, h) { isVenomous = v; }

    void display() {
        Animal::display();
        cout << "Venomous: " << (isVenomous ? "Yes" : "No") << endl;
    }
};

class Enclosure {
private:
    int capacity;
    int currentCount;
    Animal* animals;

public:
    Enclosure() {
        capacity = 0;
        currentCount = 0;
        animals = nullptr;
    }

    Enclosure(int c) {
        capacity = c;
        currentCount = 0;
        animals = new Animal[c];
    }

    ~Enclosure() {
        delete[] animals;
    }

    void addAnimal(Animal a) {
        if (currentCount < capacity) {
            animals[currentCount] = a;
            currentCount++;
        } else {
            cout << "Enclosure is full." << endl;
        }
    }

    void displayAnimals() {
        cout << "Animals in Enclosure:" << endl;
        for (int i = 0; i < currentCount; i++) {
            animals[i].display();
            cout << endl;
        }
    }
};

class Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor() {
        visitorName = "unknown";
        ticketsBought = 0;
    }

    Visitor(string n, int t) {
        visitorName = n;
        ticketsBought = t;
    }

    void displayInfo() {
        cout << "Visitor Name: " << visitorName << endl;
        cout << "Tickets Bought: " << ticketsBought << endl;
    }
};

int main() {
    Animal one("Lion", 5, true );
    Animal two("Parrot", 2, false);
    Reptile three("Snake", 3, true, true);

    Enclosure e(3);
    e.addAnimal(one);
    e.addAnimal(two);
    e.addAnimal(three);

    Visitor v("Sarah Ali", 3);

    e.displayAnimals();
    v.displayInfo();

    return 0;
}

