#include<bits/stdc++.h>
using namespace std;
int main(){
        int value []={60,100,120};
    int weight[]={10,20,30};
    int n=sizeof(value)/sizeof(value[0]);
    int capacity =50;
    vector<pair<double,pair<int,int>>> v;
    for(int i=0;i<n;i++){   
        v.push_back({(double)value[i]/weight[i],{weight[i],value[i]}});
    }
    sort(v.begin(),v.end(),greater<pair<double,pair<int,int>>>());
    double totalvalue=0.0;
    for(int i=0;i<n;i++){
        if(capacity==0){
            break;
        }
        if(v[i].second.first<=capacity){
            totalvalue +=v[i].second.second;
            capacity-=v[i].second.first;         
        }
        else {
            totalvalue += v[i].first*capacity;
            break;
        }
    }
    cout << "Total value in Knapsack = " << totalvalue << endl;
}