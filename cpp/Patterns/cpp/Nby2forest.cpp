#include<bits/stdc++.h>
using namespace std;

void nForest(int n) {
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}