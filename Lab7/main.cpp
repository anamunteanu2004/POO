#include <iostream>
#include "Tree.h"
#include "TemperatureLiterals.h"

int main() {
    float a = 300;
    std::cout << "Temperatura in Kelvin al lui a: " << a << std::endl;
    a = 300_Kelvin;
  
    float b = 120;
    std::cout << "Temperatura in Fahrenheit al lui b: " << b << std::endl;
    b = 120_Fahrenheit;

    std::cout << "Temperatura in Celsius al lui a: " << a << std::endl;
    std::cout << "Temperatura in Celsius al lui b: " << b << std::endl;

    return 0;
}
