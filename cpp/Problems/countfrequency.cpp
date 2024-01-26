#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int>lst;
    int cnt;
    for(int i=1;i<=n;i++){
        cnt=count(nums.begin(),nums.end(),i);
        lst.push_back(cnt);
    }
    return lst;
}