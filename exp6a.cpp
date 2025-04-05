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

    // Member Function to delete details
    void deleteDetails() {
        courseName = "";
        courseCode = 0;
        courseCredits = 0;
    }

    void displayDetails() {
        if(courseName == "" && courseCode == 0 && courseCredits == 0) {
            cout << "Course details have been deleted!" << endl;
        } else {
            cout << "Course Name : " << courseName << endl;
            cout << "Course Code : " << courseCode << endl;
            cout << "Course Credits : " << courseCredits << endl;
        }
    }
};

int main() {
    Course c1("Operating Systems", 103, 4);

    cout << "--- Course Details ---" << endl;
    c1.displayDetails();

    // Deleting course details
    c1.deleteDetails();

    cout << "\n--- After Deleting Details ---" << endl;
    c1.displayDetails();

    return 0;
}

