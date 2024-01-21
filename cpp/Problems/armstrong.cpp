#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
  int temp=n;
  int sum=0;
  vector<int>digits;
  while(n>0){
    int t=n%10;
    digits.push_back(t);
    n=n/10;
  }
  int k=digits.size();
  for(auto i:digits){
    sum+=pow(i,k);
  }
  if(sum==temp){
    return true;
  }else{
    return false;
  }
}

int main(){
  bool val=checkArmstrong(371);
  cout<<val<<endl;
  return 0;
}