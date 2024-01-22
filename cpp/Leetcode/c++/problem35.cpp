//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.You must write an algorithm with O(log n) runtime complexity.

/*Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
*/

#include<bits/stdc++.h>
using namespace std;

//beats 100% 0ms
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        if(target>nums[nums.size()-1]){
            ans=nums.size();
        }else if(target==nums[nums.size()-1]){
            ans=nums.size()-1;
        }else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]==target){
                    ans=i;
                    break;
                }
                if(nums[i]>target){
                    ans=i;
                    break;
                }

            }
        }
        return ans;
    }
};