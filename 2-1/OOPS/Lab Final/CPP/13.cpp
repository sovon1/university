#include <iostream>

using namespace std;

// A simple class to represent a 2D point.
class Point {
private:
    int x;
    int y;

public:
    // Default constructor
    Point() : x(0), y(0) {}

    // Parameterized constructor
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}

    // Function to display the point's coordinates
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Overload the + operator as a member function
    Point operator+(const Point& rhs) const;

    // Overload the - operator as a member function
    Point operator-(const Point& rhs) const;

    // Overload the = operator as a member function
    Point& operator=(const Point& rhs);
};

// --- Operator Implementations ---

// Implementation of the overloaded + operator
Point Point::operator+(const Point& rhs) const {
    Point result;
    result.x = this->x + rhs.x;
    result.y = this->y + rhs.y;
    return result;
}

// Implementation of the overloaded - operator
Point Point::operator-(const Point& rhs) const {
    Point result;
    result.x = this->x - rhs.x;
    result.y = this->y - rhs.y;
    return result;
}

// Implementation of the overloaded = operator
Point& Point::operator=(const Point& rhs) {
    // 1. Check for self-assignment (e.g., p1 = p1)
    if (this == &rhs) {
        return *this;
    }

    // 2. Copy the data from the right-hand-side object
    this->x = rhs.x;
    this->y = rhs.y;

    // 3. Return a reference to the current object to allow chaining
    return *this;
}

// --- Main Program to Demonstrate ---
int main() {
    // Create two points
    Point p1(10, 20);
    Point p2(5, 8);

    cout << "Initial Points:" << endl;
    cout << "P1 = "; p1.display();
    cout << "P2 = "; p2.display();
    cout << "--------------------------" << endl;

    // --- Demonstrate Addition ---
    cout << "Demonstrating Addition (P3 = P1 + P2):" << endl;
    Point p3 = p1 + p2; // This calls p1.operator+(p2)
    cout << "P3 = "; p3.display();
    cout << "--------------------------" << endl;
    
    // --- Demonstrate Subtraction ---
    cout << "Demonstrating Subtraction (P4 = P1 - P2):" << endl;
    Point p4 = p1 - p2; // This calls p1.operator-(p2)
    cout << "P4 = "; p4.display();
    cout << "--------------------------" << endl;
    // 
    // --- Demonstrate Assignment ---
    cout << "Demonstrating Assignment (P5 = P1):" << endl;
    Point p5;
    p5 = p1; // This calls p5.operator=(p1)
    cout << "P5 = "; p5.display();
    cout << "--------------------------" << endl;
    
    // --- Demonstrate Chained Assignment ---
    cout << "Demonstrating Chained Assignment (P7 = P6 = P1):" << endl;
    Point p6, p7;
    p7 = p6 = p1; // This calls p6.operator=(p1), then p7.operator=(p6)
    cout << "P6 = "; p6.display();
    cout << "P7 = "; p7.display();
    cout << "--------------------------" << endl;
    
    return 0;
}