/* Write a functions power() to raise a number m to a power n. 
The function takes a double value for m and int value for n,
 and returns the result correctly. Use a default value of 2 for n to
  take the function to calculate squares when this argument is omitted.
   Write a program where main function gets
 the values of m and n from the user to test the function.*/
#include<bits/stdc++.h>
using namespace std;

double power(double m, int n = 2) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}
int main(){
    double m;
    int n = 2; // default value for n
    cout << "Enter the base (m): ";
    cin >> m;
    cout << "Enter the exponent (n, default is 2): ";
    cin >> n;

    double result = pow(m, n);
    cout << m << " raised to the power of " << n << " is: " << result << endl;

    return 0;
    
}