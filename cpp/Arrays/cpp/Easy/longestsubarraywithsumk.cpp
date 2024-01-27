#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    vector<int>res;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size()+1;j++){
            vector<int>v(a.begin()+i,a.begin()+j);
            int sum=accumulate(v.begin(),v.end(),0);
            if(sum==k){
                res.push_back(v.size());
            }
        }
    }
    return *max_element(res.begin(),res.end());
}