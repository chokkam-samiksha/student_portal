#include <iostream>
#include <string>
#include <vector>
#include "../include/student.h"
#include "../include/course.h"
#include "../include/grade.h"
#include "../include/gpa.h"

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

    cout << "Total credits: " << calculateTotalCredits(courses) << '\n';

    vector<Grade> grades = {
        {"CS101", "A"},
        {"MA101", "B+"},
        {"DB101", "A-"}
    };

    displayGrades(grades);

    cout << "Graded courses: " << countGradedCourses(grades) << '\n';

    vector<GradePoint> gradePoints = {
        {"CS101", 4.0},
        {"MA101", 3.0},
        {"DB101", 3.7}
    };

    double gpa = calculateGPA(gradePoints);
    displayGPA(gpa);

    return 0;
}