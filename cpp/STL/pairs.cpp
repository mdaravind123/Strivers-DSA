#include<bits/stdc++.h>

using namespace std;

int main(){
  //pairs

  pair<int,int>p = {1,3};
  cout<<p.second<<endl;    //3

  pair<int,pair<int,int>>p1 ={1,{3,4}};
  cout<<p1.second.second<<endl;    //4

  pair<int,int> arr[]={{1,2},{3,4},{5,6}};
  cout<<arr[1].second<<endl;     //4

 //vectors

  vector<int> v= {1,2,3};
  v.push_back(5);
  v.emplace_back(4);
  for(int i:v){
    cout<<i<<endl;
  }

  vector<pair<int,int>> vp;
  vp.push_back({3,4});
  vp.emplace_back(1,2);
  cout<<vp[0].second<<endl;

  vector<int> b(10,100);
  for(int j: b){
    cout<<j<<endl;
  }
  cout<<endl;

  vector<int>v2(b);
  for(int j:v2){
    cout<<j<<endl;
  }
  return 0;
}