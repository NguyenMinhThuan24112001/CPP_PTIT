#include<bits/stdc++.h>
using namespace std;
long long solve(long long n){
	if(n==0||n==1){
		return 1;
	}
	long long f1=0,f2=1;
	for(int i=1;i<=92;i++){
		long long fn=f1+f2;
		if(fn==n){
			return 1;
		}
		f1=f2;
		f2=fn;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(solve(a[i])){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
