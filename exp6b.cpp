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

    // Member Function to search and display by courseCode
    void getDetailsByID(int id) {
        if(courseCode == id) {
            cout << "Course Found!" << endl;
            cout << "Course Name : " << courseName << endl;
            cout << "Course Code : " << courseCode << endl;
            cout << "Course Credits : " << courseCredits << endl;
        }
        else {
            cout << "Course Not Found!" << endl;
        }
    }
};

int main() {
    Course c1("DBMS", 101, 4);
    Course c2("Operating Systems", 102, 3);

    int searchID;
    cout << "Enter Course ID to search: ";
    cin >> searchID;

    c1.getDetailsByID(searchID);
    c2.getDetailsByID(searchID);

    return 0;
}

