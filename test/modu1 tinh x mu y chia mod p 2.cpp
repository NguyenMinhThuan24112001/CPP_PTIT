#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long b,long long p){
	long long res=1;
	while(b){
		if(b%2==1){
			res=res*a;
			res%=p;
		}
		a*=a;
		a%=p;
		b/=2;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,p;
		cin>>a>>b>>p;
		cout<<solve(a,b,p)<<endl;
	}
}
