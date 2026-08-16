#include "../../include/preferences.h"
#include <iostream>

using namespace std;

void displayPreferences(const Preferences& preferences) {
    cout << "\n=== Portal Preferences ===\n";

    cout << "Show courses: "
         << (preferences.showCourses ? "Yes" : "No") << '\n';

    cout << "Show grades: "
         << (preferences.showGrades ? "Yes" : "No") << '\n';

    cout << "Theme: " << preferences.theme << '\n';
}