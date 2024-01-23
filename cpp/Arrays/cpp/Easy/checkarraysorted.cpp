#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    int ans=1;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            ans=0;
            break;
        }
    }
    return ans;
}