/*
Question: Write a program to perform the addition of time in the hour and minutes format. 
Use a class time and a function sum() that takes two objects as arguments.
*/

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    // do i look like a person who wants an easy life huh
public:
    // Constructor
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}
    // and then everything collided just like it should be 
    // Input function
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
    
    // Display function
    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
    
    // Sum function that takes two Time objects as arguments
    Time sum(Time t1, Time t2) {
        Time result;
        result.minutes = t1.minutes + t2.minutes;
        result.hours = t1.hours + t2.hours;
        
        // Handle minutes overflow
        if (result.minutes >= 60) {
            result.hours += result.minutes / 60;
            result.minutes = result.minutes % 60;
        }
        
        return result;
    }
};

int main() {
    Time time1, time2, result;
    
    cout << "Enter first time:" << endl;
    time1.input();
    
    cout << "Enter second time:" << endl;
    time2.input();
    
    result = result.sum(time1, time2);
    
    cout << "\nFirst time: ";
    time1.display();
    cout << "Second time: ";
    time2.display();
    cout << "Sum of times: ";
    result.display();
    
    return 0;
}