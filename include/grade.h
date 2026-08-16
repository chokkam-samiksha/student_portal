#ifndef GRADE_H
#define GRADE_H

#include <string>
#include <vector>

using namespace std;

struct Grade {
    string courseCode;
    string letter;
};

void displayGrades(const vector<Grade>& grades);
int countGradedCourses(const vector<Grade>& grades);

#endif