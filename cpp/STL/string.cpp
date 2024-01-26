#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1="hello";
  string s2="world";
  string s3=s1+" "+s2;    //concatenation
  cout<<s3<<endl;

  cout<<s3.at(3)<<endl;   //accessing character

  cout<<s3.size()<<endl;  //length of string

  string str;
  str.reserve(50);
  cout<<str.capacity()<<endl;

  s1.insert(1,"a");       //inserting a string 
  cout<<s1<<endl; 

  s1.erase(s1.begin()+3,s1.begin()+5);      //erasing or removing character from string
  cout<<s1<<endl;

  s1.replace(s1.begin()+1,s1.begin()+2,"e");
  cout<<s1<<endl;

  string test="hey";
  string test1="HeyLe";
  int x=test.compare(test1);    //comparing 2 strings 1.if 0 equal 2.if >0 than string 1 has more length 3.<0 string2 has more length
  cout<<x<<endl;

  int fnd=test.find('y');       //returns position of string
  cout<<fnd<<endl;

  int rfnd=test1.rfind('e');    //returns last occurence of string
  cout<<rfnd<<endl;

  transform(test.begin(),test.end(),test.begin(),::toupper);  //converting to uppercase
  cout<<test<<endl;

  transform(test1.begin(),test1.end(),test1.begin(),::tolower);
  cout<<test1<<endl;      //convertin to lowercase

  string text="He$2o";
  for(auto i:text){
    cout<<isalpha(i)<<endl;
    cout<<isupper(i)<<endl;
    cout<<islower(i)<<endl;
    cout<<isdigit(i)<<endl;
  }

  string num="123";
  cout<<stoi(num)<<endl;
  cout<<typeid(num).name()<<endl;
  return 0;
}