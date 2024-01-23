#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    return *max_element(arr.begin(),arr.end());
}