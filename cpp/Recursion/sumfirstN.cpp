#include<bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n) {
    if(n==1){
        return 1;
    }else{
        return n+sumFirstN(n-1);
    }
}