#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long b,long long m){
	a%=m;
	long long res=1;
	while(b){
		if(b%2==1){
			res*=a;
			res%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long long b,m;
		cin>>a>>b>>m;
		int sum=0;
		for(int i=0;i<a.length();i++){
			sum=(sum*10+a[i]-'0')%m;
		}
		cout<<solve(sum,b,m)<<endl;
	}
}
