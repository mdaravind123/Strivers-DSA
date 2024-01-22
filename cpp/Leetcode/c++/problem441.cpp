#include<bits/stdc++.h>
using namespace std;
//3md beats 66%
class Solution {
public:
    int arrangeCoins(int n) {
        int c=1;
        while(n-c>0){
            n=n-c;
            c++;
        }
        if(n-c==0){
            return c;
        }else{
            return c-1;
        }

    }
};