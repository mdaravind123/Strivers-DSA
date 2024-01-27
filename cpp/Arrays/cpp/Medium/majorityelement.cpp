#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
	set<int>s(v.begin(),v.end());
	int ans;
	for(auto i:s){
		int cnt=count(v.begin(),v.end(),i);
		if(cnt>v.size()/2){
			ans=i;
			break;
		}
	}
	return ans;
}