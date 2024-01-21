#include<bits/stdc++.h>
using namespace std;

int main(){
  set<int>s;            //sorted,unique
  s.insert(10);
  s.insert(20);
  s.insert(10);
  s.insert(5);
  for(auto i:s){
    cout<<i<<endl;
  }
  cout<<endl;

  vector<int>v={5,2,3,2,3,10,6,8,4,6,8};
  vector<int>cnt;
  set<int>s1(v.begin(),v.end());        //2,3,4,5,6,8,10
  for(auto i:s1){
    int cnt1=count(v.begin(),v.end(),i);
    cnt.push_back(cnt1);
  }
  for(auto i:cnt){
    cout<<i<<endl;          //counts no of element in the vector
  }
  cout<<endl;

  for(auto i:s1){
    cout<<i<<endl;
  }
  cout<<endl;

  auto it=s1.find(6);    
  auto it1=s1.find(11);
  for(auto i=it;i!=it1;i++){       // 6 8 10
    cout<<*i<<endl;
  }
  cout<<endl;

  s.erase(10);          //deletes the element
  cout<<endl;
  for(auto i:s){
    cout<<i<<endl;
  }
  cout<<endl;

  int cnt2=s.count(45);          //returns count 
  cout<<cnt2<<endl;
  cout<<endl;
  set<int>st={10,20,30,10};
  st.erase(45);
  for(auto i:st){
    cout<<i<<endl;
  }
  return 0;
}