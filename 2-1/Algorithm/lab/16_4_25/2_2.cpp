#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid ,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[mid+1+i];
    }
    //then agher code mere daw 

}
void mergesort(int arr[],int low,int high){
    while (low<high)
    {
        int mid = low + high / 2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    
}
int main(){
    int arr[]={2,1,6,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);

}