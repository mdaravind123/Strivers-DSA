#include<bits/stdc++.h>
using namespace std;
//using recursion
vector<int> printNos(int x) {
    if(x==0){
        vector<int>ans;
        return ans;
    }
    vector<int>ans=printNos(x-1);
    ans.push_back(x);
    return ans;
}

//using normal approach
vector<int> printNos(int x) {
    int count=1;
    vector<int>printno;
    while(count<=x){
        printno.push_back(count);
        count++;
    }
    return printno;
}

