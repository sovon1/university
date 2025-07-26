#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //bubble sort 
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){ // if the current element is greater than the next element, we swap them
                swap(arr[j], arr[j+1]);
            }
            

        }
    }
   // printing 
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
/*
  let's talk about the time complexity of bubble sort:
  - The outer loop runs n-1 times, where n is the number of elements in the array.
  - The inner loop runs n-i times, where i is the current index of the outer loop.
    - Therefore, the total number of comparisons is:
        (n-1) + (n-2) + ... + 1 = n(n-1)/2
    - This gives us a time complexity of O(n^2) in the worst case.
    - The best case is O(n) when the array is already sorted.
    - The average case is O(n^2) because we still need to check all elements.
    - The space complexity is O(1) because we are not using any extra space except for a few variables.
*/


// Note: Bubble sort is not the most efficient sorting algorithm, but it is easy to understand and implement.
// It is mainly used for educational purposes and is not recommended for large datasets.

void optimized_bubble_sort(vector<int> &arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false; // Reset the swapped flag for each pass
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; // Set the flag if a swap occurred
            }
        }
        if (swapped == false) break; // If no swaps occurred, the array is sorted
    }
}

/*
possible tricky interview questions:
1. What is the time complexity of bubble sort in the best, worst, and average cases?
   - Best case: O(n) when the array is already sorted.
   - Worst case: O(n^2) when the array is sorted in reverse order.
   - Average case: O(n^2) for a random arrangement of elements.
2. Can you explain how the optimized bubble sort works?
   - The optimized bubble sort uses a flag to detect if any swaps were made during a pass. If no swaps occurred, the array is already sorted, and the algorithm can terminate early.
3. What is the space complexity of bubble sort?
   - The space complexity of bubble sort is O(1) because it only uses a constant amount of extra space for variables.
4. How does bubble sort compare to other sorting algorithms like quicksort or mergesort?
   - Bubble sort is generally less efficient than quicksort and mergesort, especially for large datasets. Quicksort has an average-case time complexity of O(n log n), while mergesort has a time complexity of O(n log n) in all cases. Bubble sort, on the other hand, has a time complexity of O(n^2) in the worst and average cases.    
5. Can bubble sort be used for sorting linked lists?
   - Yes, bubble sort can be adapted to sort linked lists, but it is not efficient for large lists. Other algorithms like mergesort are generally preferred for linked lists due to their better performance.
6. What are some real-world applications of bubble sort?
   - Bubble sort is rarely used in real-world applications due to its inefficiency. However, it can be used for educational purposes to teach sorting concepts and algorithms. It may also be used in small datasets or when simplicity is more important than performance.
    Here are the most common tricky bubble sort questions asked in FAANG interviews:

## **Algorithm Understanding & Variations**

1. **Can you implement bubble sort that sorts in descending order?**
2. **Implement bubble sort recursively instead of iteratively**
3. **How would you modify bubble sort to find the kth largest element?**
4. **Can you implement bubble sort that works with custom comparators?**

## **Optimization Questions**

5. **Implement the optimized version that stops early when array is sorted**
6. **How can you optimize bubble sort to reduce the number of passes?**
7. **Can you implement bubble sort that sorts from both ends simultaneously (cocktail sort)?**

## **Complex Scenarios**

8. **How would you implement bubble sort for a linked list?**
9. **Implement bubble sort for sorting strings lexicographically**
10. **How would you sort a 2D array using bubble sort principles?**
11. **Can you sort an array of objects using bubble sort?**

## **Analysis & Comparison**

12. **Why is bubble sort stable? Prove it with an example**
13. **In what scenarios might bubble sort be preferred over quicksort?**
14. **How does bubble sort perform on nearly sorted arrays vs completely random arrays?**
15. **What's the exact number of swaps in worst case for an array of size n?**

## **Advanced Theoretical Questions**

16. **Can you prove that bubble sort's best case is O(n)?**
17. **How would you detect if an array can be sorted with exactly k bubble sort passes?**
18. **What's the minimum number of adjacent swaps needed to sort any permutation?**
19. **How does bubble sort relate to inversion count in an array?**

## **Implementation Tricks**

20. **Implement bubble sort without using the swap function**
21. **Can you implement bubble sort using only comparison operations (no assignments)?**
22. **How would you count the exact number of comparisons made during bubble sort?**

## **Edge Cases & Error Handling**

23. **How does bubble sort handle duplicate elements?**
24. **What happens if you try to sort an empty array or single element?**
25. **How would you handle integer overflow during sorting?**
*/
