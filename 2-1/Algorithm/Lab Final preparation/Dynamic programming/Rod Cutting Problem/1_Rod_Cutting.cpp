#include<bits/stdc++.h>
using namespace std;

// Recursive function to solve rod cutting problem
int rodCutting(vector<int>& prices, int n) {
    // Base case: if rod length is 0, no profit
    if (n == 0) {
        return 0;
    }
    
    int maxProfit = INT_MIN;
    
    // Try all possible cuts from 1 to n
    for (int i = 1; i <= n; i++) {
        // Recursively solve for remaining length (n-i)
        int profit = prices[i-1] + rodCutting(prices, n - i);
        maxProfit = max(maxProfit, profit);
    }
    
    return maxProfit;
}

int main() {
    int n;
    cout << "Enter the length of the rod: ";
    cin >> n;
    
    vector<int> prices(n); 
    cout << "Enter prices for each piece length (1 to " << n << "): ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    int maxProfit = rodCutting(prices, n);
    cout << "Maximum profit: " << maxProfit << endl;
    
    return 0;
}