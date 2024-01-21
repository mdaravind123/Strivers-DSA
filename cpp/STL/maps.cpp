#include<bits/stdc++.h>
using namespace std;

int main(){
  map<int,int>m;     //sorted,unique  
  m[10]=15;          //keys are unique values are not unique
  m[12]=24;
  m[8]=36;
  for(auto i:m){           //{[8,36],[10,15],[12,24]}
    cout<<i.first<<" "<<i.second<<endl;
  }
  cout<<m[10]<<endl;      //accessing values in map
  cout<<m[8]<<endl;
  cout<<m[15]<<endl;   //if key not present it gets stored in map with value 0
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }
  cout<<m.size()<<endl;        //size of map
  cout<<m.empty()<<endl;       //checks whether map is empty or not
  cout<<m.count(8)<<endl;      //counts occurence of no of keys
  cout<<m.erase(15)<<endl;     //deletes particualr element if present

  map<string,int>employee;
  employee["aravind"]=15;
  employee["ramya"]=25;
  employee["rajit"]=35;
  employee["mathew"]=20;
  for(auto i:employee){
    cout<<i.first<<" "<<i.second<<endl;
  }

  multimap<int,int>mm;         //duplicate keys,sorted order
  mm.insert({1,3});
  mm.insert({1,2});
  for(auto i:mm){
    cout<<i.first<<" "<<i.second<<endl;
  }

  unordered_map<int,int>um;    //unique keys,unsorted order
  return 0; 
}