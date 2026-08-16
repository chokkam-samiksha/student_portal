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

string getAcademicStanding(double gpa) {
    if (gpa >= 3.5) {
        return "Excellent standing";
    }

    if (gpa >= 3.0) {
        return "Good standing";
    }

    if (gpa >= 2.0) {
        return "Satisfactory standing";
    }

    return "Academic improvement required";
}