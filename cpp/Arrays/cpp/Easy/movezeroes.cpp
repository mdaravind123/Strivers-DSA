#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    vector<int>lst;
    int c=0;
    for(auto i:a){
        if(i==0){
            c++;
        }else{
            lst.push_back(i);
        }
    }
    for(int i=0;i<c;i++){
        lst.push_back(0);
    }
    return lst;
}