#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool palindrome(string s){
        string res(s.begin(),s.end());
        reverse(s.begin(),s.end());
        return res==s;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            if(palindrome(i)){
                return i;
            }
        }
        return "";
    }
};