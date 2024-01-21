#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<int>v={1,2,3};
  v.push_back(4);     //pushes element to end of the vector
  v.emplace_back(5);  //does the same operation but more efficient
  for(int i:v){
    cout<<i<<endl;
  }
  cout<<endl;     // 1 2 3 4 5

  vector<pair<int,int>> vp;
  vp.push_back({3,4});
  vp.emplace_back(2,10);
  for(int i=0;i<vp.size();i++){
    cout<<vp[i].first<<endl;        //3 4 2 10
    cout<<vp[i].second<<endl;
  }
  cout<<endl;

  vector<bool>v2(5,true);  //repeating particular element n times 
  for(bool i:v2){
    cout<<i<<endl;
  }
  cout<<endl;

  vector<bool>v3(v2);  //copies previous vector
  for(bool i:v3){
    cout<<i<<endl;
  }
  cout<<endl;

  //iterator
  cout<<"Iterator: "<<endl;
  vector<int>::reverse_iterator it=v.rbegin();   // 5 4 3 2 1
  cout<<*it<<endl;   //5

  vector<int>::iterator it1=v.begin();  //1 2 3 4 5
  cout<<*it1<<endl;  //1

  cout<<v.back()<<endl;    //returns last element in the vector
  cout<<endl;

  for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;
  }
  v.erase(v.begin()+1);    //erase function to delete a element
  cout<<endl;

  for(auto it=v.begin();it!=v.end();it++){     //auto iterator
    cout<<*it<<endl;
  }
  
  v.erase(v.begin(),v.begin()+2);   //2 paramters begin index,end

  v.insert(v.begin()+1,2);   //inserts element (pos,val)
  
  v.insert(v.begin(),2,5);   //inserts element(pos,nooftimes,val)
  
  vector<int>copy(2,5); 

  v.insert(v.begin()+1,copy.begin(),copy.end());  //inserts the vector into the required vector

  v.pop_back();   //pops the last element

  vector<int>s={10,20};
  vector<int>t={30,40};
  s.swap(t);     //swaps elements of the vector

  s.clear();     //to remove all elements from vector

  v.at(4);       //to access element at index 4 similar to v[4]

  v.empty();     //returns whether vector is empty or not
  return 0;
}