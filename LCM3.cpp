#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long ucln(long long a,long long b){
	while(b!=0){
		int i=a%b;
		a=b;
		b=i;
	}return a;
}
long long powmod(long long a,long long b){
	long long res=1;
	while(b){
		if(b%2==1){
			res=res*a%mod;
		}
		a=a*a%mod;
		b/=2;
	}
	return res;
}
int n,a[100];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long gcd=0;
	for(int i=0;i<n;i++){
		gcd=ucln(gcd,a[i]);
	}
	long long res=1;
	for(int i=0;i<n;i++){
		res=res*powmod(a[i],gcd)%mod;
	}
	cout<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
