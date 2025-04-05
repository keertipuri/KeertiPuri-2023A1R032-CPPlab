#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id, rollNum;
    float marks;

public:
    // Constructor to initialize student details
    Student(string n, int i, int r, float m) {
        name = n;
        id = i;
        rollNum = r;
        marks = m;
    }

    // Function to display student details
    void display() {
        cout << "\nStudent Name: " << name
             << "\nStudent ID: " << id
             << "\nRoll Number: " << rollNum
             << "\nMarks: " << marks << endl;
    }

    // Function to search for a student by ID
    static void searchStudent(Student students[], int size, int searchId) {
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (students[i].id == searchId) {
                cout << "\nStudent Found!";
                students[i].display();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "\nStudent ID " << searchId << " not found.\n";
        }
    }
};

int main() {
    // Array of Student objects
    Student students[5] = {
        {"Ram", 101, 1, 450},
        {"Sham", 102, 2, 480},
        {"Sita", 103, 3, 460},
        {"Sehaj", 104, 4, 250},
        {"Ramaya", 105, 5, 300}
    };

    int searchId;
    cout << "Enter Student ID to search: ";
    cin >> searchId;

    // Call the search function
    Student::searchStudent(students, 5, searchId);

    return 0;
}

