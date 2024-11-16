#include <iostream>

class Vehicle {
protected:
    int speed;
    int wheels;
public:
    Vehicle(int s = 0, int w = 0) {
        speed = s;
        wheels = w;
    }

    void displayinfo() {
        std::cout << "Speed of vehicle: " << speed << std::endl;
        std::cout << "Number of wheels:" << wheels << std::endl;

    }
};

class Car : public Vehicle {

    std::string fuelType;
public:
    Car(int s = 0, int w = 0, std::string ft = "") : Vehicle(s, w) {
        fuelType = ft;
    }
    void displayCarInfo() {
        std::cout << "This is a car." << std::endl;
        displayinfo();
        std::cout << "Fuel type: " << fuelType << std::endl;

    }
};

class Bicycle : public Vehicle {
    bool hasBell;
public:
    Bicycle(int s = 0, int w = 0, bool hasb=true): Vehicle(s, w)  {
        hasBell = hasb;
    }
    void displayBicycleInfo() {
        std::cout << "This is a bicycle." << std::endl;
        displayinfo();
        if (hasBell) {
            std::cout << "It does have bell " << std::endl;
        }
        else {
            std::cout << "It doesn't have bell " << std::endl;
        }

    }


};

int main()
{
    Vehicle v;
    v.displayinfo();

    Car c(100, 4, "diesel");
    c.displayCarInfo();

    Bicycle b(20, 2, true);
    b.displayBicycleInfo();
}