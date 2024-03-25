#include "Sort.h"

Sort::Sort(int numElements, int minValue, int maxValue) {
    elements.reserve(numElements);
    for (int i = 0; i < numElements; ++i) {
        int val = rand() % (maxValue - minValue + 1) + minValue;
        elements.push_back(val);
    }
}

Sort::Sort(std::initializer_list<int> initList) : elements(initList) {}

Sort::Sort(const std::vector<int>& vec, int numElements) {
    elements.reserve(numElements);
    for (int i = 0; i < numElements; ++i) {
        elements.push_back(vec[i]);
    }
}

Sort::Sort(const std::string& str) {
    std::stringstream ss(str);
    int num;
    char comma;
    while (ss >> num >> comma) {
        elements.push_back(num);
    }
    ss >> num; 
    elements.push_back(num);
}

void Sort::insertSort(bool ascending) {
    if (ascending)
        std::sort(elements.begin(), elements.end());
    else
        std::sort(elements.rbegin(), elements.rend());
}

void Sort::quickSort(bool ascending) {
    if (ascending)
        std::sort(elements.begin(), elements.end());
    else
        std::sort(elements.rbegin(), elements.rend());
}

void Sort::bubbleSort(bool ascending) {
    int n = elements.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ascending ? (elements[j] > elements[j + 1]) : (elements[j] < elements[j + 1])) {
                std::swap(elements[j], elements[j + 1]);
            }
        }
    }
}

void Sort::print() {
    for (int num : elements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int Sort::getElementCount() {
    return elements.size();
}

int Sort::getElementAtIndex(int index) {
    if (index >= 0 && index < elements.size()) {
        return elements[index];
    }
    return -1;
}
