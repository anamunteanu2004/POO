#include "Sort.h"

int main() {
    // exemplu
    Sort sort1(10, 1, 100); // 10 elemente random intre 1 si 100
    sort1.print();

    Sort sort2 = { 9, 8, 7, 6, 5 };  // 5 elemente initializate 
    sort2.print();

    std::vector<int> vec = { 50, 40, 30, 20, 10 }; // 5 elemente intr-un vector existent, luand in considerare doar primele 3 elemente
    Sort sort3(vec, 3); 
    sort3.print();

    Sort sort4("10,40,100,5,70"); // sir de caractere
    sort4.print();

    // exemplu de sortare
    Sort sort5 = { 5, 3, 1, 4, 2 };
    std::cout << "Inainte de sortare: ";
    sort5.print();
    sort5.insertSort(); // in ordine crescatoare - implicit
    std::cout << "Dupa Insertion Sort (crescator): ";
    sort5.print();

    sort5.quickSort(false); // in ordine descrescatoare
    std::cout << "Dupa Quick Sort (descrescator): ";
    sort5.print();

    sort5.bubbleSort(); // in ordine crescatoare
    std::cout << "Dupa Bubble Sort (crescator): ";
    sort5.print();

    return 0;
}
