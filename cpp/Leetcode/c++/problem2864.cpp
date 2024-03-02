#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int o = count(s.begin(),s.end(),'0');
        int e= count(s.begin(),s.end(),'1');
        string res;
        for(int i=0;i<e-1;i++){
            res+='1';
        }
        for(int i=0;i<o;i++){
            res+='0';
        }
        res+='1';
        return res;
    }
};