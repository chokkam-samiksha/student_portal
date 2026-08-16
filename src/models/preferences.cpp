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

bool isSupportedTheme(const string& theme) {
    return theme == "Light" ||
           theme == "Dark";
}

string getPreferenceSummary(const Preferences& preferences) {
    string summary = "Preferences: ";

    summary += preferences.showCourses ? "courses on, " : "courses off, ";
    summary += preferences.showGrades ? "grades on, " : "grades off, ";
    summary += "theme=" + preferences.theme;

    return summary;
}

// TODO: Add validation for additional student portal preference options.