#include "Math.h"

int main() {
    //exemple
    std::cout << "Add(5, 3) = " << Math::Add(5, 3) << std::endl;
    std::cout << "Add(5, 3, 2) = " << Math::Add(5, 3, 2) << std::endl;
    std::cout << "Add(5.5, 3.3) = " << Math::Add(5.5, 3.3) << std::endl;
    std::cout << "Add(5.5, 3.3, 2.2) = " << Math::Add(5.5, 3.3, 2.2) << std::endl;
    std::cout << "Mul(5, 3) = " << Math::Mul(5, 3) << std::endl;
    std::cout << "Mul(5, 3, 2) = " << Math::Mul(5, 3, 2) << std::endl;
    std::cout << "Mul(5.5, 3.3) = " << Math::Mul(5.5, 3.3) << std::endl;
    std::cout << "Mul(5.5, 3.3, 2.2) = " << Math::Mul(5.5, 3.3, 2.2) << std::endl;

    std::cout << "Add(4, 3, 7, 1, 2) = " << Math::Add(5, 4, 3, 7, 1, 2) << std::endl;

    char* concatenated = Math::Add("Hello", " World");
    if (concatenated != nullptr) {
        std::cout << "Add(\"Hello\", \" World\") = " << concatenated << std::endl;
        delete[] concatenated; 
    }
    else {
        std::cout << "One of the strings is nullptr!" << std::endl;
    }

    return 0;
}
