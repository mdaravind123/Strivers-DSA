#include<bits/stdc++.h>
using namespace std;

int main(){
  queue<int>q;
  q.push(10);  //{10}
  q.push(20);  //{10,20}
  q.push(30);  //{10,20,30}
  q.pop();     //10
  q.back()+=5;
  cout<<q.back()<<endl;    //35
  cout<<q.front()<<endl;   //20
  q.pop();
  cout<<q.front()<<endl;   //35
  cout<<q.size()<<endl;    //1
  cout<<q.empty()<<endl;   //false
  return 0;
}