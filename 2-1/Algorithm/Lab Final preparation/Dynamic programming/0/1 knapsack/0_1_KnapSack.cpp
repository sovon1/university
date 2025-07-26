#include<bits/stdc++.h>
using namespace std;
int knapsack(int capacity, vector<int>& weights, vector<int>& profits, int n) {
    vector<vector<int>>m(n + 1, vector<int>(capacity + 1, 0));
    // Build the table in bottom-up manner
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if(weights[i-1] <= w) {
                // if the weight of the current item is less than or equal to the current capacity
                // choose the maximum of including or excluding the current item
                // max(previous item ,)
                m[i][w] = max(m[i-1][w], m[i-1][w - weights[i-1]] + profits[i-1]);
            } else {
                // copy the value from the previous item
                m[i][w] = m[i-1][w];
            }
        }
    }
    return m[n][capacity];
}
int main(){
    vector<int> weights = {1,4,6,5};
    vector<int>profits = {2,3,1,4};
    int capacity = 8;
    int n = weights.size();
    int maxProfit = knapsack(capacity, weights, profits, n);
    cout << "Maximum profit: " << maxProfit << endl;
}