#include<bits/stdc++.h>
using namespace std;

int main(){
  unordered_set<int>st;            //unique but not sorted
  st.insert(5);
  st.insert(10);
  st.insert(5);
  st.insert(15);
  st.insert(5);
  st.insert(10);
  for(auto i:st){
    cout<<i<<endl;
  }
  return 0;
}