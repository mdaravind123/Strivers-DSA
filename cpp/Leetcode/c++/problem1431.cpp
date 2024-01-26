#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        int mx=*max_element(candies.begin(),candies.end());
        for(auto i:candies){
            if(i+extraCandies>=mx){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        return res;
    }
};