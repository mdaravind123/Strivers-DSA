#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res;
        set<int>s(nums.begin(),nums.end());
        for(auto i:s){
            int cnt=count(nums.begin(),nums.end(),i);
            if(cnt==1){
                res=i;
                break;
            }
        }
        return res;
    }
};