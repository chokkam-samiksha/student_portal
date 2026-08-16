# Student Portal

A C++ console-based Student Portal developed as part of a Git version-control lab.

## Project Overview

The Student Portal is designed to provide students with a simple way to
view and manage academic information through a command-line interface.

The project will be developed incrementally using Git branches, commits,
merges, and other version-control techniques.

The portal demonstrates student records, courses, grades, GPA calculation, and preference management.

## Planned Features

- Display student information
- Manage enrolled courses
- Record and display academic grades
- Calculate the student's GPA
- Manage student preferences
- Provide a simple menu-driven console interface

## Requirements

To build and run the project, the following tools are required:

- C++ compiler supporting C++17 or later
- Git
- GitHub account for repository access
- VS Code or another C++ compatible editor

## Build Instructions

Clone the repository and navigate into the project directory.

Compile the main program using a C++17-compatible compiler:

```bash
g++ -std=c++17 src/main.cpp -o student-portal

```

Run the program using:

.\student-portal.exe

## Usage

When the program starts, it displays the Student Portal welcome message
and asks the user to enter a student name.

Enter a valid student name when prompted. The application checks that the
name is not empty and then displays a welcome message.

The program currently provides the initial portal interface. Additional
student management features will be added during development.

## Project Structure

The project is organized into separate directories so that source code
and project documentation can be managed clearly.

Current structure:

student_portal/
├── .gitignore
├── README.md
└── src/
    └── main.cpp

The `src` directory contains the C++ source code for the application.
Additional source and header files will be added as new features are
developed.