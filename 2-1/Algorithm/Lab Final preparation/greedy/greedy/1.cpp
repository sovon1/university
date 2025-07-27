#include<bits/stdc++.h>
using namespace std;
int main(){
        int deadline[]={3,1,2,2};
    int prfit[]={50,10,20,30};
    int n=sizeof(deadline)/sizeof(deadline[0]);
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({prfit[i],deadline[i]});
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    int mx = 0;
    for(int i=0;i<n;i++){
        mx=max(mx,v[i].second);
    }
    vector<int> slot(mx+1,-1);
    int cntjob=0;
    int totalprofit=0;
    for(int i=0;i<n;i++){
        for(int j=v[i].second;j>0;j--){
            if(slot[j]==-1){
                slot[j]=i;  // eikhane ja mon chay dewa jabe
                cntjob++;
                totalprofit+=v[i].first;
                break;
            }
        }
    }
}