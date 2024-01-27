#include <bits/stdc++.h> 
using namespace std;

int getLongestSubarray(vector<int>& nums, int k){
    int mx=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size()+1;j++){
            vector<int>v(nums.begin()+i,nums.begin()+j);
            int sum=accumulate(v.begin(),v.end(),0);
            if(sum==k){
                if(mx<v.size()){
                    mx=v.size();
                }
            }
        }
    }
    return mx;
}