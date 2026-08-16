#include "../../include/course.h"
#include <iostream>

using namespace std;

void displayCourses(const vector<Course>& courses) {
    cout << "\n=== Enrolled Courses ===\n";

    for (const Course& course : courses) {
        cout << course.code << " - "
             << course.name << " ("
             << course.credits << " credits)\n";
    }

    cout << "Total enrolled courses: "
         << courses.size() << '\n';
}

int calculateTotalCredits(const vector<Course>& courses) {
    int totalCredits = 0;

    for (const Course& course : courses) {
        totalCredits += course.credits;
    }

    return totalCredits;
}