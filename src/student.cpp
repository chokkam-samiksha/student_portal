#include "student.h"
#include <iostream>
using namespace std;

void displayStudent(const Student& student) {
    cout << "\n=== Student Information ===\n";
    cout << "Name: " << student.name << '\n';
    cout << "Student ID: " << student.studentId << '\n';
    cout << "Department: " << student.department << '\n';
}