#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long b,long long m){
	long long res=1;
	a%=m;
	while(b){
		if(b%2==1){
			res=((res%m)*(a%m))%m;
		}
		a=((a%m)*(a%m))%m;
		b/=2;
	}
	return res;
}
void solve2(string a,long long b,long long m){
	long long res=0;
	for(int i=0;i<a.length();i++){
		res=(res*10+a[i]-'0')%m;
	}
	cout<<solve(res,b,m)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long long b,m;
		cin>>a>>b>>m;
		solve2(a,b,m);
	}
}
