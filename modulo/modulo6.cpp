#include<bits/stdc++.h>
using namespace std;
long long pow(long long a,long long b,long long c){
	long long res=1;
	a%=c;
	while(b){
		if(b%2==1){
			res=((res%c)*(a%c))%c;
		}
		a=((a%c)*(a%c))%c;
		b/=2;
	}
	return res;
}
void solve(){
	string a;
	long long b,m;
	cin>>a>>b>>m;
	long long res=0;
	for(int i=0;i<a.length();i++){
		res=(res*10+a[i]-'0')%m;
	}
	cout<<pow(res,b,m)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
