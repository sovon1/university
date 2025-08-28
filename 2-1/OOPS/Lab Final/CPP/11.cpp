#include <iostream>

using namespace std;

// Represents a single deposit in a long-term scheme.
class DepositScheme {
private:
    // Instance variables: unique for each deposit
    long principal;
    int period; // in years
    float returnValue;

    // Static variable (class variable): shared by all objects
    static float interestRate; 

public:
    // Constructor to initialize a deposit
    DepositScheme(long p, int t) {
        principal = p;
        period = t;
        // Calculate the return value upon creation
        calculateReturn(); 
    }

    // A static function can only access static members.
    // Used to set the shared interest rate for all deposits.
    static void setInterestRate(float rate) {
        interestRate = rate;
    }
    
    // Calculates the return value for this specific deposit
    void calculateReturn() {
        // Simple Interest Formula: A = P(1 + rt)
        returnValue = principal * (1 + interestRate * period);
    }

    // Displays the details for this specific deposit
    void display() {
        cout << "Principal: " << principal 
             << " | Period: " << period << " yrs"
             << " | Rate: " << interestRate * 100 << "%"
             << " | Return Value: " << returnValue << endl;
    }
};

// **Crucial Step**: Initialize the static data member outside the class.
// It belongs to the class, not to any single object.
float DepositScheme::interestRate = 0.0;

// --- Main Program ---
int main() {
    // Set the shared interest rate for all schemes to 5%
    DepositScheme::setInterestRate(0.05f); 

    cout << "--- Bank Deposit Schemes (Interest Rate is fixed at 5%) ---" << endl;

    // Create different deposit objects. Each will use the same static interest rate.
    DepositScheme deposit1(10000, 3); // 10,000 for 3 years
    DepositScheme deposit2(50000, 5); // 50,000 for 5 years
    DepositScheme deposit3(25000, 10); // 25,000 for 10 years

    // Display the details of each individual deposit
    deposit1.display();
    deposit2.display();
    deposit3.display();

    // Now, let's change the interest rate for all future objects
    cout << "\n--- Interest Rate has been updated to 7.5% ---" << endl;
    DepositScheme::setInterestRate(0.075f);

    DepositScheme deposit4(10000, 3); // Same deposit as #1 but with the new rate
    deposit4.display();

    return 0;
}