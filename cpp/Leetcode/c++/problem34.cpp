#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>lst;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                lst.push_back(i);
            }
        }
        if(lst.size()==0){
            return {-1,-1};
        }else{
            return {lst[0],lst[lst.size()-1]};
        }
    }
};