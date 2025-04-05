#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNum;
    float marks;
    bool isDeleted; // Flag to mark student as deleted

public:
    // Constructor to initialize student details
    Student(string n, int r, float m) {
        name = n;
        rollNum = r;
        marks = m;
        isDeleted = false; // Initially, no student is deleted
    }

    // Function to display student details
    void display() {
        if (!isDeleted) {
            cout << "\nStudent Name: " << name
                 << "\nRoll Number: " << rollNum
                 << "\nMarks: " << marks << endl;
        } else {
            cout << "\nRecord for Roll Number " << rollNum << " is deleted." << endl;
        }
    }

    // Function to delete student details by roll number
    void deleteStudent(int r) {
        if (rollNum == r) {
            isDeleted = true;
            cout << "\nStudent with Roll Number " << rollNum << " has been deleted.\n";
        }
    }
};

int main() {
    // Array of Student objects
    Student students[5] = {
        {"Ram", 1, 450},
        {"Sham", 2, 480},
        {"Sita", 3, 460},
        {"Sehaj", 4, 250},
        {"Ramaya", 5, 300}
    };

    int searchRoll;
    cout << "Enter Roll Number of student to delete: ";
    cin >> searchRoll;

    // Deleting student record
    for (int i = 0; i < 5; i++) {
        students[i].deleteStudent(searchRoll);
    }

    // Display remaining students
    cout << "\nUpdated Student List:";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}

