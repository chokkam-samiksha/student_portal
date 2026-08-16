#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

using namespace std;

struct Course {
    string code;
    string name;
    int credits;
};

void displayCourses(const vector<Course>& courses);

#endif