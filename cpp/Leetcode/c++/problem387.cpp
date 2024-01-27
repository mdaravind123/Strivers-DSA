#include<bits/stdc++.h>
using namespace std;
//better optimal solution
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26,0);
        for(auto i:s){
            count[i-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(count[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};

//my solution
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        set<char>s1(s.begin(),s.end());
        int cnt;
        for(auto i:s1){
            cnt=count(s.begin(),s.end(),i);
            m[i]=cnt;
        }
        vector<char>uniq;
        for(auto i:m){
            if(i.second==1){
                uniq.push_back(i.first);
            }
        }
        if(uniq.size()==0){
            return -1;
        }else{
            vector<int>len;
            for(auto i:uniq){
                len.push_back(s.find(i));
            }
            return *min_element(len.begin(),len.end());
        }
    }
};

