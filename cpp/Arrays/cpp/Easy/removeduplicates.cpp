#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	set<int>s(arr.begin(),arr.end());
	return s.size();
}