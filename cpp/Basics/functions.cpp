#include<bits/stdc++.h>
using namespace std;
bool isdivisiblebytwo(int n){
  if(n%2==0){
    return true;
  }else{
    return false;
  }
}

int main(){
  int n;
  cin>>n;
  cout<<isdivisiblebytwo(n)<<endl;
  return 0;
}