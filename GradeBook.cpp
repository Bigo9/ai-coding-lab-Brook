#include "GradeBook.h"

GradeBook::GradeBook() {
    // Vectors are default-initialized as empty
}

void GradeBook::addGrade(const std::string& assignment, double score) {
    assignments.push_back(assignment);
    scores.push_back(score);
}

double GradeBook::getAverage() const {
    if (scores.empty()) return 0.0;
    double sum = 0.0;
    for (double s : scores) sum += s;
    return sum / scores.size();
}

double GradeBook::getHighest() const {
    if (scores.empty()) return 0.0;
    double max = scores[0];
    for (double s : scores) if (s > max) max = s;
    return max;
}

int GradeBook::numGrades() const {
    return scores.size();
}