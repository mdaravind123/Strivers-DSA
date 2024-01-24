#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int first=arr[0];
    arr.erase(arr.begin());
    arr.push_back(first);
    return arr;
}