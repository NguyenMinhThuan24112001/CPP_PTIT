#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long b,long long c){
	a%=c;
	long long res=1;
	while(b){
		if(b%2==1){
			res*=a;
			res%=c;
		}
		a*=a;
		a%=c;
		b/=2;
	}
	return res;
}
void solve2(string a,long long b,long long c){
	long long res=0;
	for(int i=0;i<a.length();i++){
		res=(res*10+a[i]-'0')%c;
	}
	cout<<solve(res,b,c)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long long b,c;
		cin>>a>>b>>c;
		solve2(a,b,c);
	}
}
