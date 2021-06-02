#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long ucln(long long a,long long b){
	while(b!=0){
		int i=a%b;
		a=b;
		b=i;
	}
	return a;
}
long long solve(long long a, long long b){
	long long res=1;
	while(b){
		if(b%2==1){
			res*=a;
			res%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;
	}
	return res;
}
long long n,a[100000];
void solve2(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long g=0;
	long long res=1;
	for(int i=0;i<n;i++){
		g=ucln(g,a[i]);
		res=res*a[i]%mod;
	}
	cout<<solve(res,g)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve2();
	}
}
