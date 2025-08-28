#include <iostream>

using namespace std;

// Forward declaration of class DB is necessary because DM's friend function uses it.
class DB; 

// Class to store distance in Metres and Centimetres
class DM {
private:
    int metres;
    int centimetres;

public:
    void readData() {
        cout << "Enter distance (metres centimetres): ";
        cin >> metres >> centimetres;
    }

    void displayData() {
        cout << metres << "m " << centimetres << "cm" << endl;
    }

    // Friend function declaration
    friend DM add(const DM&, const DB&);
};

// Class to store distance in Feet and Inches
class DB {
private:
    int feet;
    int inches;

public:
    void readData() {
        cout << "Enter distance (feet inches): ";
        cin >> feet >> inches;
    }

    void displayData() {
        cout << feet << "ft " << inches << "in" << endl;
    }

    // Friend function declaration
    friend DM add(const DM&, const DB&);
};

/**
 * Friend function to add a DM object and a DB object.
 * It can access private members of both classes.
 * This version returns the result as a DM object.
 */
DM add(const DM& dm_obj, const DB& db_obj) {
    // Conversion factors
    const float INCH_TO_CM = 2.54;
    const int M_TO_CM = 100;
    const int FT_TO_IN = 12;

    // 1. Convert DM object's distance entirely to centimetres.
    float total_cm_from_dm = (dm_obj.metres * M_TO_CM) + dm_obj.centimetres;

    // 2. Convert DB object's distance entirely to centimetres.
    float total_inches_from_db = (db_obj.feet * FT_TO_IN) + db_obj.inches;
    float total_cm_from_db = total_inches_from_db * INCH_TO_CM;

    // 3. Add the two centimetre totals.
    int total_sum_cm = static_cast<int>(total_cm_from_dm + total_cm_from_db + 0.5); // +0.5 for rounding

    // 4. Create a new DM object for the result.
    DM result;
    result.metres = total_sum_cm / M_TO_CM;
    result.centimetres = total_sum_cm % M_TO_CM;

    return result;
}

// --- Main Program ---
int main() {
    DM metric_dist;
    DB imperial_dist;

    cout << "--- Enter Metric Distance ---" << endl;
    metric_dist.readData();

    cout << "\n--- Enter Imperial Distance ---" << endl;
    imperial_dist.readData();

    // Call the friend function to perform the addition
    DM result_dist = add(metric_dist, imperial_dist);

    cout << "\n----------------------------" << endl;
    cout << "Metric Distance:   ";
    metric_dist.displayData();
    cout << "Imperial Distance: ";
    imperial_dist.displayData();
    cout << "Total (in Metric): ";
    result_dist.displayData();
    cout << "----------------------------" << endl;

    return 0;
}