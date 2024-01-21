#include<bits/stdc++.h>
using namespace std;

int main(){
  multiset<int>ms;  //sorted but not unique
  ms.insert(1);
  ms.insert(2);
  ms.insert(1);
  ms.insert(1);
  for(auto i:ms){
    cout<<i<<endl;    // 1 1 1 2
  }
  ms.count(1);   //3
  //if you want to erase particular times
  ms.erase(ms.find(1));     //deletes first occurence of 1
  return 0;
}