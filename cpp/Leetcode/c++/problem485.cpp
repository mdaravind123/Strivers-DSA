#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        for(auto i:nums){
            if(i==1){
                count++;
            }else{
                if(maxcount<count){
                    maxcount=count;
                }
                count=0;
            }
        }
        if(maxcount<count){
            maxcount=count;
        }
        return maxcount;
    }
};