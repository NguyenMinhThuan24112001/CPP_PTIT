#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long fibo(int n){
	long long f0=0,f1=1;
	long long fn;
	for(int i=2;i<=n;i++){
		fn=(f0%mod+f1%mod)%mod;
		f0=f1;
		f1=fn;
	}
	return fn;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<fibo(n)<<endl;
	}
}
