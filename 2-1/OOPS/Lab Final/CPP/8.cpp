#include <iostream>
/*Vector maney hocche floating values 
 why floating values are vectors?
 karon vector gulo dynamically size change korte pare, ar float type er value gulo beshi precision er jonno use kora hoy.
*/
using namespace std;

const int MAX_SIZE = 50; // The maximum possible size of our vector

class Vector {
private:
    float elements[MAX_SIZE];
    int size;

public:
    // Constructor to initialize size to 0
    Vector() {
        size = 0;
    }

    void createVector();
    void modifyElement();
    void multiplyByScalar();
    void displayVector();
};

// --- Member Function Definitions ---
//
// Creates the vector by getting size and elements from the user 
void Vector::createVector() {
    cout << "Enter the size of the vector (up to " << MAX_SIZE << "): ";
    cin >> size;

    if (size > MAX_SIZE || size <= 0) {
        cout << "Invalid size. Setting size to 0." << endl;
        size = 0;
        return;
    }

    cout << "Enter " << size << " floating-point elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> elements[i];
    }
    cout << "Vector created successfully." << endl;
}

// Modifies the value of a given element 
void Vector::modifyElement() {
    int index;
    float newValue;

    cout << "Enter the index of the element to modify (0 to " << size - 1 << "): ";
    cin >> index;

    // Boundary check
    if (index < 0 || index >= size) {
        cout << "Error: Invalid index." << endl;
        return;
    }

    cout << "Enter the new value: ";
    cin >> newValue;
    elements[index] = newValue;
    cout << "Element at index " << index << " updated." << endl;
}

// Multiplies the vector by a scalar value 
void Vector::multiplyByScalar() {
    float scalar;
    cout << "Enter the scalar value to multiply with: ";
    cin >> scalar;

    for (int i = 0; i < size; i++) {
        elements[i] *= scalar;
    }
    cout << "Vector multiplied by " << scalar << "." << endl;
}

// Displays the vector in the format (10, 20, 30, ...) 
void Vector::displayVector() {
    if (size == 0) {
        cout << "()" << endl;
        return;
    }

    cout << "(";
    for (int i = 0; i < size; i++) {
        cout << elements[i];
        if (i < size - 1) {
            cout << ", "; // Add comma and space for all but the last element
        }
    }
    cout << ")" << endl;
}

// --- Main function to test the class ---
int main() {
    Vector myVector;
    int choice;

    // The vector must be created first
    myVector.createVector();

    do {
        cout << "\n--- VECTOR MENU ---" << endl;
        cout << "1: Modify an Element" << endl;
        cout << "2: Multiply by Scalar" << endl;
        cout << "3: Display Vector" << endl;
        cout << "4: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myVector.modifyElement();
                break;
            case 2:
                myVector.multiplyByScalar();
                break;
            case 3:
                cout << "Current Vector: ";
                myVector.displayVector();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}