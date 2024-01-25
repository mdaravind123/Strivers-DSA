#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>reverse;
        for(auto i:nums){
            reverse.push_back(revdigits(i));
        }
        nums.insert(nums.end(),reverse.begin(),reverse.end());
        set<int>distinct(nums.begin(),nums.end());
        return distinct.size();
    }
    int revdigits(int num){
        int rev=0;
        while(num>0){
            rev=rev*10+num%10;
            num=num/10;
        }
        return rev;
    }
};