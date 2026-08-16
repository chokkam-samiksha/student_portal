#include <iostream>
#include <string>
#include <vector>
#include "../include/student.h"
#include "../include/course.h"

using namespace std;

int main() {
    Student student;

    cout << "=== Student Portal ===\n";

    cout << "Enter your name: ";
    getline(cin, student.name);

    cout << "Enter your student ID: ";
    getline(cin, student.studentId);

    cout << "Enter your department: ";
    getline(cin, student.department);

    if (student.name.empty() || student.studentId.empty() ||
        student.department.empty()) {
        cout << "\nAll student details are required.\n";
        return 1;
    }

    displayStudent(student);

    vector<Course> courses = {
        {"CS101", "Programming Fundamentals", 4},
        {"MA101", "Discrete Mathematics", 3},
        {"DB101", "Database Systems", 4}
    };

    displayCourses(courses);

    cout << "Total credits: "
     << calculateTotalCredits(courses) << '\n';

    return 0;
}