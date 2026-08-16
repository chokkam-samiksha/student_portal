#include <iostream>
#include <string>

int main() {
    std::string studentName;

    std::cout << "=== Student Portal ===\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, studentName);

    if (studentName.empty()) {
        std::cout << "Student name cannot be empty.\n";
        return 1;
    }

    std::cout << "\nWelcome, " << studentName << "!\n";
    std::cout << "Student portal initialized successfully.\n";

    return 0;
}