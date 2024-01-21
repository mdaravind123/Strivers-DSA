#include<bits/stdc++.h>

using namespace std;

int main(){
  list<int>ls;
  ls.push_back(10);
  ls.emplace_back(5);
  ls.push_front(14);
  for(auto i:ls){
    cout<<i<<endl;
  }
  cout<<endl;
  ls.emplace_front();
  for(auto i:ls){
    cout<<i<<endl;
  }
  return 0;
}