#include "NumberList.h"
#include <iostream>

int main() {
    NumberList list;

    list.Init();

    list.Add(5);
    list.Add(2);
    list.Add(8);
    list.Add(1);

    std::cout << "Lista originala: ";
    list.Print();

    list.Sort();
    std::cout << "Lista ordonata: ";
    list.Print();

    for (int i = 4; i < 14; i++) {
        if (!list.Add(i)) {
            std::cout << "Lista este plina! Nu s-a(u) putut adauga " << i << std::endl;
        }
    }

    return 0;
}
