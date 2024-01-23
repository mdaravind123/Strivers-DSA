#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    sort(a.begin(),a.end());
    vector<int>res;
    res.push_back(a[a.size()-2]);
    res.push_back(a[1]);
    return res;
}