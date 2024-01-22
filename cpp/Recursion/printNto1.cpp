#include<bits/stdc++.h>
using namespace std;

//using normal approach
vector<int> printNos(int x) {
    vector<int>print;
    while(x>0){
        print.push_back(x);
        x--;
    }
    return print;
}