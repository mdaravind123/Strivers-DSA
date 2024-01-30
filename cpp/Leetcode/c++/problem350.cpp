#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>lst;
        for(auto i:nums1){
            auto it=find(nums2.begin(),nums2.end(),i);
            if(it!=nums2.end()){
                lst.push_back(i);
                nums2.erase(nums2.begin()+distance(nums2.begin(),it));
            }
        }
        return lst;
    }
};