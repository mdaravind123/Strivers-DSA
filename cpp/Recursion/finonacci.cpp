#include<bits/stdc++.h>
using namespace std;

//not optimal  34/40
int fibonacci(int n){
    if(n==1 || n==0){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

vector<int> generateFibonacciNumbers(int n) {
    vector<int>fib;
    for(int i=1;i<=n;i++){
        fib.push_back(fibonacci(i));
    }
    return fib;
}

//optimal code

vector<int> generateFibonacciNumbers(int n) {
    vector<int>fib;
    int start=0;
    int next=1;
    fib.push_back(start);
    if(n==1){
        return fib;
    }else{
        fib.push_back(next);
        if(n==2){
            return fib;
        }else{
            for(int i=0;i<n-2;i++){
                int sum=start+next;
                fib.push_back(sum);
                start=next;
                next=sum;
            }
            return fib;
        }
    }
}