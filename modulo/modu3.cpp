#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,long long k){
	long long res;
	if(n<k){
		return (n*(n+1))/2;
	}else{
		long long p=n/k;
		res=p*(k*(k-1)/2);
		long long r=n%k;
		res+=(r*(r+1))/2;
		return res;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}
