#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxcount = 0;
        map<int,int>m;
        set<int>s(nums.begin(),nums.end());
        for(auto i:s){
            int cnt = count(nums.begin(),nums.end(),i);
            if(maxcount<cnt){
                maxcount = cnt;
            }
            m[i]=cnt;
        }
        int maxfreq = 0;
        for(auto i:m){
            if(i.second == maxcount){
                maxfreq+=maxcount;
            }
        }
        return maxfreq;
    }
};