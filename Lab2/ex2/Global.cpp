#include "Global.h"

int CompareNames(const Student& student1, const Student& student2)
{
    return student1.GetName().compare(student2.GetName());
}

int CompareMathGrades(const Student& student1, const Student& student2)
{
    if (student1.GetMathGrade() > student2.GetMathGrade())
        return 1;
    else if (student2.GetMathGrade() > student1.GetMathGrade())
        return -1;
    return 0;
}

int CompareHistoryGrades(const Student& student1, const Student& student2)
{
    if (student1.GetHistoryGrade() > student2.GetHistoryGrade())
        return 1;
    else if (student2.GetHistoryGrade() > student1.GetHistoryGrade())
        return -1;
    return 0;
}

int CompareEnglishGrades(const Student& student1, const Student& student2)
{
    if (student1.GetEnglishGrade() > student2.GetEnglishGrade())
        return 1;
    else if (student2.GetEnglishGrade() > student1.GetEnglishGrade())
        return -1;
    return 0;
}

int CompareAverage(const Student &student1, const Student &student2)
{
    if (student1.GetAverageGrade() == student2.GetAverageGrade())
        return 0;
    return student1.GetAverageGrade() > student2.GetAverageGrade() ? 1 : -1;
}
