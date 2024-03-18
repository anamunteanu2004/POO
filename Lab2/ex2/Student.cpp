#include "Student.h"

void Student::SetName(const std::string& name) {
    this->name = name;
}

std::string Student::GetName() const {
    return name;
}

void Student::SetMathGrade(float grade) {
    if (grade >= 1 && grade <= 10)
        mathGrade = grade;
}

float Student::GetMathGrade() const {
    return mathGrade;
}

void Student::SetEnglishGrade(float grade) {
    if (grade >= 1 && grade <= 10)
        englishGrade = grade;
}

float Student::GetEnglishGrade() const {
    return englishGrade;
}

void Student::SetHistoryGrade(float grade) {
    if (grade >= 1 && grade <= 10)
        historyGrade = grade;
}

float Student::GetHistoryGrade() const {
    return historyGrade;
}

float Student::GetAverageGrade() const {
    return (mathGrade + englishGrade + historyGrade) / 3.0;
}
