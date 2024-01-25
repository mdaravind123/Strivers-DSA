#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>intersection;
        for(auto i:s1){
            int cnt=count(s2.begin(),s2.end(),i);
            if(cnt==1){
                intersection.push_back(i);
            }
        }
        return intersection;
    }
};