#include "../../include/grade.h"
#include <iostream>

using namespace std;

void displayGrades(const vector<Grade>& grades) {
    cout << "\n=== Course Grades ===\n";

    for (const Grade& grade : grades) {
        cout << grade.courseCode << " - "
             << grade.letter << '\n';
    }
}