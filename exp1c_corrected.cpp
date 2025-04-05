#include <iostream>
using namespace std;

class Course {
public:
    string CourseName;
    int CourseID;
    int CourseCredits;

public:
    // Parameterized Constructor
    Course(string Name, int ID, int Credits) {
        CourseName = Name;
        CourseID = ID;
        CourseCredits = Credits;
    }

    // Display Course Details
    void Display() {
        cout << "\nCourse Name: " << CourseName
             << "\nCourse ID: " << CourseID
             << "\nCourse Credits: " << CourseCredits << endl;
    }

    // Assign Course Based on Percentage & Attendance
    void CourseAssignment() {
        float per, Att;
        cout << "\nEnter Your Percentage and Attendance: ";
        cin >> per >> Att;

        if (per >= 80 || Att >= 90) {
            cout << "\nYou are eligible for all courses (C, C++, Java, SQL, PHP)";
        } else if (per >= 70 || Att >= 80) {
            cout << "\nYou are eligible for Java.";
        } else if (per >= 60 || Att >= 70) {
            cout << "\nYou are eligible for C++.";
        } else if (per >= 50 || Att >= 60) {
            cout << "\nYou are eligible for PHP.";
        } else if (per >= 40 || Att >= 50) {
            cout << "\nYou are eligible for C.";
        } else {
            cout << "\nYou are not eligible for any course.";
        }
    }
};

int main() {
    // Initializing Course Objects
    Course obj[5] = {
        {"C", 1, 8},
        {"C++", 2, 6},
        {"Java", 3, 4},
        {"SQL", 4, 12},
        {"PHP", 5, 16}};

    // Display All Courses
    for (int i = 0; i < 5; i++) {
        obj[i].Display();
    }

    // Call Course Assignment Function
    obj[0].CourseAssignment();

    return 0;
}

