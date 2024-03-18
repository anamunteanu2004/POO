#include <iostream>
#include "Student.h"
#include "Global.h"

int main() {
    Student student1, student2;

    student1.SetName("Ana");
    student1.SetMathGrade(8.5);
    student1.SetEnglishGrade(7.0);
    student1.SetHistoryGrade(9.0);

    student2.SetName("Ion");
    student2.SetMathGrade(7.0);
    student2.SetEnglishGrade(8.0);
    student2.SetHistoryGrade(9.0);

    std::cout << "Name comparison: ";
    if (CompareNames(student1, student2) == 1)
        std::cout << student1.GetName() << " has a cooler name!" << std::endl;
    else if (CompareNames(student1, student2) == -1)
        std::cout << student2.GetName() << " has a cooler name!" << std::endl;
    else std::cout << "they both have swag." << std::endl;

    std::cout << "Average grade comparison: ";
    if (CompareAverage(student1, student2) == 1)
        std::cout << student1.GetName() << " is just better." << std::endl;
    else if (CompareAverage(student1, student2) == -1)
        std::cout << student2.GetName() << " is just better." << std::endl;
    else std::cout << "they are equals in terms of intelligence." << std::endl;
        
    std::cout << "History grade comparison: ";
    if (CompareHistoryGrades(student1, student2) == 1)
        std::cout << student1.GetName() << " is better at History." << std::endl;
    else if (CompareHistoryGrades(student1, student2) == -1)
        std::cout << student2.GetName() << " is better at History." << std::endl;
    else std::cout << "they are both great at History." << std::endl;

    std::cout << "English grade comparison: ";
    if (CompareEnglishGrades(student1, student2) == 1)
        std::cout << student1.GetName() << " is better at English." << std::endl;
    else if (CompareEnglishGrades(student1, student2) == -1)
        std::cout << student2.GetName() << " is better at English." << std::endl;
    else std::cout << "they are both great at English." << std::endl;

    std::cout << "Math grade comparison: ";
    if (CompareMathGrades(student1, student2) == 1)
        std::cout << student1.GetName() << " is better at Math." << std::endl;
    else if (CompareMathGrades(student1, student2) == -1)
        std::cout << student2.GetName() << " is better at Math." << std::endl;
    else std::cout << "they are both great at Math." << std::endl;

    return 0;
}
