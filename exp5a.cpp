#include<iostream>
using namespace std;

class Course {
    string courseName;
    int courseCode;
    int courseCredits;

public:
    // Parameterized Constructor
    Course(string name, int code, int credits) {
        courseName = name;
        courseCode = code;
        courseCredits = credits;
    }

    void displayDetails() {
        cout << "Course Name : " << courseName << endl;
        cout << "Course Code : " << courseCode << endl;
        cout << "Course Credits : " << courseCredits << endl;
    }
};

int main() {
    // Creating object and passing values to constructor
    Course c1("C++ Programming", 101, 4);

    cout << "--- Course Details ---" << endl;
    c1.displayDetails();

    return 0;
}

