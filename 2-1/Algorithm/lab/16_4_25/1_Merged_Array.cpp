#include<bits/stdc++.h>
#include <vector> 
#include <iostream> 

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n); 
    vector<int> brr(m); 
    for(int k=0;k<n;k++){
          cin>>arr[k];
    }
    for(int k=0;k<m;k++){
        cin>>brr[k];
    }
    vector<int> merged_array(n+m); 
    int i=0,j=0; int f=0;
    while (i<n && j<m)
    {
        if(arr[i]<=brr[j]){
            merged_array[f]=arr[i];
            i++;
            f++;
        }
        else {
            merged_array[f]=brr[j];
            j++;
            f++;
        }
    }
 
    while (i < n) {
        merged_array[f] = arr[i];
        i++;
        f++;
    }
  
    while (j < m) {
        merged_array[f] = brr[j];
        j++;
        f++;
    }

    for(int k=0; k < m+n; k++){ 
        cout << merged_array[k] << " ";
    }
    cout << endl; 

    return 0; 
}