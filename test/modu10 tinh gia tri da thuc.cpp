#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
void solve(){
	int n,x,a[5000];
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long res=0;
	for(int i=0;i<n-1;i++){
		res=x*(res+a[i])%mod;
	}
	res+=a[n-1];
	cout<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
