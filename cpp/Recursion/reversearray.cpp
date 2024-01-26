#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(int n, vector<int> &nums)
{
    reverse(nums.begin(),nums.end());
    return nums;
}