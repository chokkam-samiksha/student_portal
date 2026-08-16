#include <iostream>
#include <string>
#include "../include/student.h"

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

    return 0;
}