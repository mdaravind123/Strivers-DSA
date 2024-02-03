#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        vector<int>modified;
        for(auto i:nums){
            if(i>0){
                positive.push_back(i);
            }else if(i<0){
                negative.push_back(i);
            }
        }
        for(int i=0;i<nums.size()/2;i++){
            modified.push_back(positive[i]);
            modified.push_back(negative[i]);
        }
        return modified;
    }
};