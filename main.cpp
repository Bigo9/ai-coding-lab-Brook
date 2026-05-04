#include "GradeBook.h"
#include <iostream>

int main() {
    GradeBook gb;
    gb.addGrade("HW1", 85.0);
    gb.addGrade("HW2", 92.0);
    gb.addGrade("Test", 78.0);

    std::cout << "Number of grades: " << gb.numGrades() << std::endl;
    std::cout << "Average: " << gb.getAverage() << std::endl;
    std::cout << "Highest: " << gb.getHighest() << std::endl;

    return 0;
}