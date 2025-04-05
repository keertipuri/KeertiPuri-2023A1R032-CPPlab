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

    // Member Function to update course details
    void updateDetails(string name, int code, int credits) {
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
    // Initial course details
    Course c1("C++ Programming", 101, 4);

    cout << "--- Initial Course Details ---" << endl;
    c1.displayDetails();

    // Updating details using member function
    c1.updateDetails("Data Structures", 102, 5);

    cout << "\n--- Updated Course Details ---" << endl;
    c1.displayDetails();

    return 0;
}

