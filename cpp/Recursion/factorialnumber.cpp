#include<bits/stdc++.h>
using namespace std;

vector<long long> factorialNumbers(long long n) {
    vector<long long>res;
    long long i=1;
    long long temp=1;
    while(i<=n){
        res.push_back(i);
        temp=temp+1;
        i=i*temp;
    }      
    return res;
}