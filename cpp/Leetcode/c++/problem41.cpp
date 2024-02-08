#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>m;
        for(int i:nums){
            m[i]=1;
        }
        for(int i=1;i<=nums.size();i++){
            if(m.count(i)==0){
                return i;
            }
        }
        return nums.size()+1;
    }
};