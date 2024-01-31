#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,string>m;
        vector<int>v(score.begin(),score.end());
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size();i++){
            string s="";
            if(i==0){
                s="Gold Medal";
            }else if(i==1){
                s="Silver Medal";
            }else if(i==2){
                s="Bronze Medal";
            }else{
                s=s+to_string(i+1);
            }
            m[v[i]]=s;
        }
        vector<string>res;
        for(auto i:score){
            res.push_back(m[i]);
        }
        return res;
    }
};