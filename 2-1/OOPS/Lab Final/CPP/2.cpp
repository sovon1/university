/*Write a program to find the largest of three numbers using inline function.*/
#include<bits/stdc++.h>
using namespace std;
inline int findlargest(int a, int b, int c) {
    return max(a, max(b, c));
}
int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int largest = findlargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;
}