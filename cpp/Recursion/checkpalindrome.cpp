#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& str) {
    string rev=str;
    reverse(str.begin(),str.end());
    if(rev==str){
        return true;
    }else{
        return false;
    }
}