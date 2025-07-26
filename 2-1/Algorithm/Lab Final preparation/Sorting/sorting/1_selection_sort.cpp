#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // i will perform selection sort 
    /*
    Selection Sort is a simple sorting algorithm that works by repeatedly selecting the
     smallest (or largest, depending on the order) element from the unsorted portion 
     of the array and moving it to the beginning (or end) of the sorted portion.🐸
    */
   //so the main panda is clear that we need to find the minimum element in the unsorted portion of the array
   //and then put it at the beginning of the sorted portion of the array
    for(int i=0;i<n-1;i++){ // why n-1? because we need to leave the last element as it is, it will be sorted by default
        int minIndex = i;// assume the first element is the minimum🍉
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex]){ // if we find a smaller element, we update the minimum index
                minIndex = j; // update the minimum index
            }
            
        }
        // After finding the minimum element in the unsorted portion,
        // we need to swap it with the first element of the unsorted portion
        swap(arr[i], arr[minIndex]);
    }
    // printing 
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
/*
  let's talk about the time complexity of selection sort:
  - The outer loop runs n-1 times, where n is the number of elements in the array.
  - The inner loop runs n-i times, where i is the current index of the outer loop.
    - Therefore, the total number of comparisons is:
        (n-1) + (n-2) + ... + 1 = n(n-1)/2  
    - This gives us a time complexity of O(n^2) in the worst case.
    - The best case is also O(n^2) because we still need to check all elements to ensure they are sorted.
    - The average case is also O(n^2) for the same reason.
    - The space complexity is O(1) because we are not using any extra space except for a few variables.

*/