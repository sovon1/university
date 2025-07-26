#include<bits/stdc++.h>
using namespace std;

// Memoized version using DP array
int rodCuttingDP(vector<int>& prices, int n, vector<int>& dp) {
    // Base case: if rod length is 0, no profit
    if (n == 0) {
        return 0;
    }
    
    // If already computed, return stored result
    if (dp[n] != -1) {
        return dp[n];
    }
    
    int maxProfit = INT_MIN;
    
    // Try all possible cuts from 1 to n
    for (int i = 1; i <= n; i++) {
        // Recursively solve for remaining length (n-i)
        int profit = prices[i-1] + rodCuttingDP(prices, n - i, dp);
        maxProfit = max(maxProfit, profit);
    }
    
    // Store the result in DP array
    dp[n] = maxProfit;
    return maxProfit;
}

// Bottom-up DP approach (Tabulation)
int rodCuttingTabulation(vector<int>& prices, int n) {
    vector<int> dp(n + 1, 0);
    
    // Fill the DP table bottom-up
    for (int length = 1; length <= n; length++) {
        for (int cut = 1; cut <= length; cut++) {
            dp[length] = max(dp[length], prices[cut-1] + dp[length - cut]);
        }
    }
    
    return dp[n];
}

// Function to print the actual cuts made
void printCuts(vector<int>& prices, int n) {
    vector<int> dp(n + 1, 0);
    vector<int> cuts(n + 1, 0); // To store the cut made at each length
    
    // Fill DP table and track cuts
    for (int length = 1; length <= n; length++) {
        for (int cut = 1; cut <= length; cut++) {
            if (prices[cut-1] + dp[length - cut] > dp[length]) {
                dp[length] = prices[cut-1] + dp[length - cut];
                cuts[length] = cut; // Store the cut that gives maximum profit
            }
        }
    }
    
    cout << "Cuts made: ";
    int remaining = n;
    while (remaining > 0) {
        cout << cuts[remaining] << " ";
        remaining -= cuts[remaining];
    }
    cout << endl;
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
    
    // Method 1: Memoization (Top-down DP)
    vector<int> dp(n + 1, -1);
    int maxProfit1 = rodCuttingDP(prices, n, dp);
    cout << "Maximum profit (Memoization): " << maxProfit1 << endl;
    
    // Method 2: Tabulation (Bottom-up DP)
    int maxProfit2 = rodCuttingTabulation(prices, n);
    cout << "Maximum profit (Tabulation): " << maxProfit2 << endl;
    
    // Print the actual cuts
    printCuts(prices, n);
    
    return 0;
}

/*
Time Complexity: O(n^2)
Space Complexity: O(n)

Example:
Rod length = 4
Prices = [1, 5, 8, 9]

DP table filling:
dp[0] = 0
dp[1] = max(prices[0] + dp[0]) = 1
dp[2] = max(prices[0] + dp[1], prices[1] + dp[0]) = max(1+1, 5+0) = 5
dp[3] = max(prices[0] + dp[2], prices[1] + dp[1], prices[2] + dp[0]) = max(1+5, 5+1, 8+0) = 8
dp[4] = max(prices[0] + dp[3], prices[1] + dp[2], prices[2] + dp[1], prices[3] + dp[0]) 
      = max(1+8, 5+5, 8+1, 9+0) = 10

Maximum profit = 10 (cut into pieces of length 2 and 2)
*/