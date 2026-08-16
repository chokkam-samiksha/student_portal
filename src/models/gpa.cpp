#include "../../include/gpa.h"
#include <iostream>
#include <iomanip>

using namespace std;

double calculateGPA(const vector<GradePoint>& grades) {
    if (grades.empty()) {
        return 0.0;
    }

    double totalPoints = 0.0;

    for (const GradePoint& grade : grades) {
        totalPoints += grade.points;
    }

    return totalPoints / grades.size();
}

void displayGPA(double gpa) {
    cout << fixed << setprecision(2);
    cout << "Current GPA: " << gpa << '\n';
}