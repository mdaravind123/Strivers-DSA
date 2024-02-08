#include<bits/stdc++.h>
using namespace std;

bool comp(pair<char,int>v1,pair<char,int>v2){
  return v1.second>v2.second;
}

int main(){
  string s="tree";
  set<char>s1(s.begin(),s.end());
  map<char,int>m;
  for(auto i:s){
    m[i]=count(s.begin(),s.end(),i);
  }
  vector<pair<char,int>>vp(m.begin(),m.end());
  sort(vp.begin(),vp.end(),comp);
  for(int i=0;i<vp.size();i++){
    cout<<vp[i].first<<" "<<vp[i].second<<endl;
  }
  string s2="";
  for(int i=0;i<vp.size();i++){
    s2=s2+string(vp[i].first,vp[i].second);
  }
  cout<<s2<<endl;
}