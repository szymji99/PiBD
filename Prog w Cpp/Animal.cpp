// Animal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Animal {
protected:
    std::string name;
    int age;
public:
    Animal(std::string n="", int a = 0) {
        name = n;
        age = a;

    }
    void displayinfo() {
        std::cout << "Name of an animal : " << name <<'\n';
        std::cout << "Age of an animal  : " << age  <<'\n';
    }
    void makeSound() {
        std::cout << "This is an abstract animal it doesn't make sound.\n";
    }
};


class Cat : public Animal {

public:

    Cat(std::string n = "", int a = 0) : Animal(n, a) {
    }
    void makeSound() {
        std::cout << "Meow.\n";
    }
    void displayCatInfo() {
        std::cout << "This is a cat " << name << '\n';
        displayinfo();
    }
};

int main()
{
    Animal a;
    a.displayinfo();
    a.makeSound();

    Cat b("Bonifacy", 2);
    b.makeSound();
    b.displayCatInfo();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
