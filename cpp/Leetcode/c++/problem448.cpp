#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>m;
        set<int>s(nums.begin(),nums.end());
        vector<int>lst;
        for(int i=1;i<nums.size()+1;i++){
            m[i]=0;
        }
        for(auto i:s){
            m[i]+=1;
        }
        for(auto i:m){
            if(i.second==0){
                lst.push_back(i.first);
            }
        }
        return lst;

    }
};