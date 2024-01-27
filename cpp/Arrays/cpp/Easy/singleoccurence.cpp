#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
	set<int>s(arr.begin(),arr.end());
	int cnt;
	for(auto i:s){
		cnt=count(arr.begin(),arr.end(),i);
		if(cnt==1){
			return i;
		}
	}	
}