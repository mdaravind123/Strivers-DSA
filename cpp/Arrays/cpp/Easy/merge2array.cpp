#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    a.insert(a.end(),b.begin(),b.end());
    set<int>s(a.begin(),a.end());
    vector<int>v(s.begin(),s.end());
    return v;
}