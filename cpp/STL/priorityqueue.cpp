#include<bits/stdc++.h>
using namespace std;

int main(){
  priority_queue<int>pq;    //maxheap
  pq.push(5);    //5
  pq.push(2);    //{2,5}
  pq.push(8);   //{2,5,8}
  pq.push(10);  //{2,5,8,10}
  pq.pop();     //10
  cout<<pq.top()<<endl;     //8
  cout<<pq.size()<<endl;    //3
  cout<<pq.empty()<<endl;   //false
  priority_queue<int,vector<int>,greater<int>>pq1;
  pq1.push(5);  //{5}
  pq1.push(2);  //{2,5}
  pq1.push(8);  //{2,5,8}
  cout<<pq1.top()<<endl;     //2

  return 0;
}