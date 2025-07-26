/**
 * Insertion Sort works by iterating through the array and for each element,
 * placing it in its correct position among the previously sorted elements.
 * For each element, it shifts all greater elements one position to the right
 * until finding the correct position for the current element.
 * 
 * Time Complexity:
 * - Best Case: O(n) when array is already sorted
 * - Average Case: O(n²)
 * - Worst Case: O(n²) when array is sorted in reverse order
 * 
 * Space Complexity: O(1) - In-place sorting algorithm
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //insertion sort is about are you in the correct position ? if not , go to your place
        for(int i=0;i<n;i++){
           int j=i;
           while (j>0 && arr[j]<arr[j-1])
           {
           swap(arr[j],arr[j-1]);
           j--;
           }
           
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
