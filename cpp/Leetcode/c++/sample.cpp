#include<bits/stdc++.h>
using namespace std;

bool comp(pair<char,int>p1,pair<char,int>p2){
  if(p1.second<p2.second){
    return false;
  }else if(p1.second>p2.second){
    return true;
  }else{
    if(p1.first<p2.first){
      return true;
    }else{
      return false;
    }
  }
}

int main(){
  string s="leetcode";
  set<int>s1(s.begin(),s.end());
  map<char,int>m;
  for(auto i:s1){
    m[i]=count(s.begin(),s.end(),i);
  }
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }
}