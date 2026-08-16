#ifndef GPA_H
#define GPA_H

#include <string>
#include <vector>

using namespace std;

struct GradePoint {
    string courseCode;
    double points;
};

double calculateGPA(const vector<GradePoint>& grades);
void displayGPA(double gpa);

#endif