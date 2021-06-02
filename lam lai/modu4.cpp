#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,long long k){
	long long sum=0;
	if(n<k){
		return n*(n+1)/2;
	}else{
		long long p=n/k;
		sum+=p*(k*(k-1)/2);
		long long t=n%k;
		sum+=(t+1)*t/2;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		if(solve(n,k)==k){
			cout<<1;
		}else{
			cout<<0;
		}
		cout<<endl;
	}
}
