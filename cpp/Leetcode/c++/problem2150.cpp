#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>nums={3,1,2,3};
  map<int,int>m;
  set<int>s(nums.begin(),nums.end());
  for(auto i:s){
    m[i]=count(nums.begin(),nums.end(),i);
  }
  
  return 0;
}