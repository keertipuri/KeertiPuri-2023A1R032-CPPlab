#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNum;
    float marks;

public:
    // Constructor to initialize student details
    Student(string n, int r, float m) {
        name = n;
        rollNum = r;
        marks = m;
    }

    // Function to display student details
    void display() {
        cout << "\nStudent Name: " << name
             << "\nRoll Number: " << rollNum
             << "\nMarks: " << marks << endl;
    }

    // Function to search for student by roll number
    static void getResultByRoll(Student students[], int size, int searchRoll) {
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (students[i].rollNum == searchRoll) {
                cout << "\nStudent Found!";
                students[i].display();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "\nNo student found with Roll Number " << searchRoll << ".\n";
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
    cout << "Enter Roll Number to get the result: ";
    cin >> searchRoll;

    // Call the function to search by roll number
    Student::getResultByRoll(students, 5, searchRoll);

    return 0;
}

