#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int maxcoins=0;
        sort(piles.begin(),piles.end(),greater<int>());
        for(int i=1;i<(2*(piles.size()))/3;i=i+2){
            maxcoins+=piles[i];
        }
        return maxcoins;
    }
};