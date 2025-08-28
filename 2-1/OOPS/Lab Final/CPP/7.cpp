#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    char grade;

public:
    void readData() {
        cout << "Enter name: ";
        cin.ignore(); // jeno getline() er age input buffer clear hoye jay
        
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Student students[10];
    
    cout << "Enter details for 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << (i + 1) << ":" << endl;
        students[i].readData();
    }
    
    cout << "\n\nDisplaying student information:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << (i + 1) << ":" << endl;
        students[i].displayData();
    }
    
    return 0;
}