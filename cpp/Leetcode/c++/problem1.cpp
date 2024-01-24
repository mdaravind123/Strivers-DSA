#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>seen;
        int i=0;
        while(i<nums.size()){
            int num=nums[i];
            int complement=target-nums[i];
            if(seen.count(complement)==1){
                return {i,seen[complement]};
            }
            seen.insert({num,i});
            i++;
        }
        return {};
    }
};