#include<bits/stdc++.h>
using namespace std;

int main(){
  stack<int>st;
  st.push(10);       //{10}
  st.push(20);       //{10,20}
  st.push(30);       //{10,20,30}
  st.pop();          //30
  cout<<st.top()<<endl;          //20
  cout<<st.size()<<endl;         //2
  cout<<st.empty()<<endl;        //false
  stack<int>st1;
  st1.swap(st);
  return 0;
}