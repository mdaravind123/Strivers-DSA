#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        for(int i=0;i<words.size();i++){
            if(words[i].find(x)<words[i].size()){
                res.push_back(i);
            }
        }
        return res;
    }
};