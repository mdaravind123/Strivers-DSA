#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    vector<int>v;
    for(int i=0;i<k;i++){
        v.push_back(arr[0]);
        arr.erase(arr.begin());
    }
    for(auto i:v){
        arr.push_back(i);
    }
    return arr;
}