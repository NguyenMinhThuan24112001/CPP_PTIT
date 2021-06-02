#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long modu(long long a,long long b){
	long long res=1;
	while(b){
		if(b%2==1){
			res=((res%mod)*(a%mod))%mod;
		}
		a=((a%mod)*(a%mod))%mod;
		b/=2;
	}
	return res;
}
long long ucln(long long a,long long b){
	while(b!=0){
		int i=a%b;
		a=b;
		b=i;
	}
	return a;
}
long long a[100],n;
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long res=1;
	long long g=0;
	for(int i=0;i<n;i++){
		g=ucln(g,a[i]);
	}
	for(int i=0;i<n;i++){
		res=res*a[i]%mod;
	}
	cout<<modu(res,g)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
