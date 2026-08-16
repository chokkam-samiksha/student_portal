#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    std::string name;
    std::string studentId;
    std::string department;
};

void displayStudent(const Student& student);

#endif