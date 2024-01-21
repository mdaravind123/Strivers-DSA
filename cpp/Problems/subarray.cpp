#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subarray(vector<int>arr){
  vector<vector<int>>subarray;
  for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size()+1;j++){
      vector<int>ls(arr.begin()+i,arr.begin()+j);
      subarray.push_back(ls);
    }
  }
  return subarray;
}

int main(){
  vector<int>arr={3,1,2,4};
  vector<vector<int>>lst=subarray(arr);
  int sum=0;
  for(auto i:lst){
    sum+=*min_element(i.begin(),i.end());
  }
  cout<<sum<<endl;
  return 0;
}