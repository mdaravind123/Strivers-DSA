#include<bits/stdc++.h>
using namespace std;

//beats 5% 1517ms
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup=0,missing=0;
        int n=nums.size();
        vector<int>res;
        for(int i=1;i<n+1;i++){
            int cnt=count(nums.begin(),nums.end(),i);
            if(cnt==2){
                dup=i;
            }else if(cnt==0){
                missing=i;
            }
        }
        res.push_back(dup);
        res.push_back(missing);
        return res;   
    }
};