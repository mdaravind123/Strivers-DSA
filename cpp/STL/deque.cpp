#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  deque<int>dq;
  dq.push_back(10);      //{10}
  dq.emplace_back(20);   //{10,20}
  dq.push_front(30);     //{30,10,20}
  dq.emplace_front(40);  //{40,30,10,20}
  for(auto i:dq){
    cout<<i<<endl;
  }
  cout<<endl;
  dq.pop_back();           //20
  dq.pop_front();          //40
  for(auto i:dq){          //30 10
    cout<<i<<endl;
  }
  cout<<endl;
  cout<<dq.back()<<endl;       //10
  cout<<dq.front()<<endl;      //30
  
  return 0;
}