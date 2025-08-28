#include <iostream>

using namespace std;

const int MAX_SIZE = 50; 

class Vector {
private:
    float elements[MAX_SIZE];
    int size;

public:
    Vector() {
        size = 0;
    }

    void createVector();
    void displayVector();

    // New function to add two vectors
    void addVectors(const Vector& v1, const Vector& v2);
};

// --- Member Function Definitions ---

void Vector::createVector() {
    cout << "Enter the size of the vector (up to " << MAX_SIZE << "): ";
    cin >> size;

    if (size > MAX_SIZE || size <= 0) {
        cout << "Invalid size. Vector creation failed." << endl;
        size = 0;
        return;
    }

    cout << "Enter " << size << " floating-point elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> elements[i];
    }
}

void Vector::displayVector() {
    if (size == 0) {
        cout << "()" << endl;
        return;
    }

    cout << "(";
    for (int i = 0; i < size; i++) {
        cout << elements[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << ")" << endl;
}

// Adds two vectors, v1 and v2, and stores the result in the calling object
void Vector::addVectors(const Vector& v1, const Vector& v2) {
    // Vector addition is only possible if sizes are the same
    if (v1.size != v2.size) {
        cout << "Error: Vectors must be of the same size to perform addition." << endl;
        size = 0; // Set the result vector to be empty
        return;
    }
    
    size = v1.size; // The result vector has the same size
    for (int i = 0; i < size; i++) {
        // Add elements at each corresponding position
        elements[i] = v1.elements[i] + v2.elements[i];
    }
}

// --- Main function to demonstrate vector addition ---
int main() {
    Vector vectorA, vectorB, resultVector;

    cout << "--- Create First Vector (A) ---" << endl;
    vectorA.createVector();

    cout << "\n--- Create Second Vector (B) ---" << endl;
    vectorB.createVector();

    // Add vectorA and vectorB, store the result in resultVector
    cout << "\nAdding Vector A and Vector B..." << endl;
    resultVector.addVectors(vectorA, vectorB);

    cout << "\nVector A: ";
    vectorA.displayVector();

    cout << "Vector B: ";
    vectorB.displayVector();

    cout << "Resultant Vector (A + B): ";
    resultVector.displayVector();

    return 0;
}
