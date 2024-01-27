#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>count1(26,0);
        vector<int>count2(26,0);
        char c;
        for(auto i:s){
            count1[i-'a']++;
        }   
        for(auto j:t){
            count2[j-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count1[i]!=count2[i]){
                c=i+'a';
                break;
            }
        }
        return c;
    }
};