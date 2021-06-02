#include<bits/stdc++.h>
using namespace std;
bool solve(long long n,long long k){
	long long res;
	if(n<k){
		if((n*(n+1)/2)==k){
			return true;
		}else{
			return false;
		}
	}else{
		long long p=n/k;
		res=p*(k*(k-1)/2);
		long long r=n%k;
		res+=(r*(r+1))/2;
		return res==k;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		if(solve(n,k)){
			cout<<"1";
		}else{
			cout<<"0";
		}
		cout<<endl;
	}
}
