#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        string s="";
        if(num==0){
            return "0";
        }
        int flag=0;
        if(num<0){
            flag=1;
        }
        num=abs(num);
        while(num>0){
            s+=to_string(num%7);
            num/=7;
        }
        if(flag==1){
            s+="-";
        }
        reverse(s.begin(),s.end());
        return s;
    }
};