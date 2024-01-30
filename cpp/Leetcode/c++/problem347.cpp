#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   static bool comp(pair<int,int>p1,pair<int,int>p2){
       if(p1.second<p2.second){
           return false;
       }else if(p1.second>p2.second){
           return true;
       }else{
           if(p1.first<p2.first) {
               return true;
           }else{
               return false;
           }
       }
   }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        map<int,int>m;
        int cnt;
        for(auto i:s){
            cnt=count(nums.begin(),nums.end(),i);
            m[i]=cnt;
        }
        vector<pair<int,int>>vp(m.begin(),m.end());
        sort(vp.begin(),vp.end(),comp);
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(vp[i].first);
        }
        return res;
    }
};