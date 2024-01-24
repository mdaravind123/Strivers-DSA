#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        set<int>s(nums.begin(),nums.end());
        vector<int>res;
        for(auto i:s){
            int cnt=count(nums.begin(),nums.end(),i);
            if(cnt>n/3){
                res.push_back(i);
            }
        }
        return res;
    }
};