#pragma once

#include <string>

class Student {
    std::string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:
    void SetName(const std::string& name);
    std::string GetName() const;

    void SetMathGrade(float grade);
    float GetMathGrade() const;

    void SetEnglishGrade(float grade);
    float GetEnglishGrade() const;

    void SetHistoryGrade(float grade);
    float GetHistoryGrade() const;

    float GetAverageGrade() const;
};

int CompareNames(const Student& student1, const Student& student2);
int CompareMathGrades(const Student& student1, const Student& student2);
int CompareHistoryGrades(const Student& student1, const Student& student2);
int CompareEnglishGrades(const Student& student1, const Student& student2);
int CompareAverage(const Student& student1, const Student& student2);
