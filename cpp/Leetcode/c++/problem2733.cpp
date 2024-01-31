#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        int cnt=0;
        for(auto i:nums){
            if(i!=mx && i!=mn){
                return i;
            }
        }
        return -1;
    }
};