#include <iostream>
#include <string>
class Add {
public:
    double perform(double a, double b) {
        return a + b;
    }
};

class Multiply {
public:
    double perform(double a, double b) {
        return a*b;
    }
};


int main()
{
    int x;
    double a, b;
    std::cout << "Podaj rodzaj operacji:" << std::endl;
    std::cout << "1 - dodawanie, 2 - mnozenie" << std::endl;
    std::cin >> x;

    if (x != 1 and x != 2) {
        std::cout << "Bledna operacja!! ";
        return 0;
    }

    std::cout << " Podaj liczby" << std::endl;
    std::cin >> a >> b;

    if (x == 1) { 
        Add calc; 
        std::cout << calc.perform(a, b) << std::endl;
    }
    else if (x == 2) {
        Multiply calc;
        std::cout << calc.perform(a, b) << std::endl;
    }







}

