#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>v={10,23,10,12,13,14,5,8,7,25,32,34,13,23,45};
  sort(v.begin(),v.end());
  for(auto i:v){
    cout<<i<<endl;
  }
  vector<int>vt={10,8,12,11,23,34}; //to sort in descending order
  sort(vt.begin(),vt.end(),greater<int>());
  for(auto i:vt){
    cout<<i<<endl;
  }
  //sort according to condition
  pair<int,int>arr[]={{3,4},{1,4},{1,2},{2,4}};
  
  return 0;
}