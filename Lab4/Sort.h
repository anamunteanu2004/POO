#pragma once

#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>

class Sort {
private:
    std::vector<int> elements;

public:
    // Constructori
    Sort(int numElements, int minValue, int maxValue);
    Sort(std::initializer_list<int> initList);
    Sort(const std::vector<int>& vec, int numElements);
    Sort(const std::string& str);

    // Metode de sortare
    void insertSort(bool ascending = true);
    void quickSort(bool ascending = true);
    void bubbleSort(bool ascending = true);

    // Altele
    void print();
    int getElementCount();
    int getElementAtIndex(int index);
};
