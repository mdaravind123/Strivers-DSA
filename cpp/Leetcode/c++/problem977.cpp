#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>squares;
        for(auto i:nums){
            squares.push_back(i*i);
        }
        sort(squares.begin(),squares.end());
        return squares;
    }
};