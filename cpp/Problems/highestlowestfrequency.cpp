#include<bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    map<int,int>m;
    set<int>s(v.begin(),v.end());
    int cnt;
    for(auto i:s){
        cnt=count(v.begin(),v.end(),i);
        m[i]=cnt; 
    }
    int mx=0;
    int mn=10000;
    for(auto i:m){
        if(i.second>mx){
            mx=i.second;
        }
        if(i.second<mn){
            mn=i.second;
        }
    }
    vector<int>high;
    vector<int>low;
    for(auto i:m){
        if(i.second==mx){
            high.push_back(i.first);
        }
        if(i.second==mn){
            low.push_back(i.first);
        }
    }
    sort(high.begin(),high.end());
    sort(low.begin(),low.end());
    return {high[0],low[0]};
}