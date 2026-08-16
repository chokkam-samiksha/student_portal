#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <string>

using namespace std;

struct Preferences {
    bool showGrades;
    bool showCourses;
    string theme;
};

void displayPreferences(const Preferences& preferences);
bool isSupportedTheme(const string& theme);

#endif