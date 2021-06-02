#include<bits/stdc++.h>
using namespace std;
void sieve(long long n){
	long long p[n+1];
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=0;i<=sqrt(n);i++){
		if(p[i]){
			for(int j=i*i;j<=n;j+=i){
				p[j]=false;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(p[i]){
			cout<<i<<" ";
		}
	}
}
int mai(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		sieve(n);
		cout<<endl;
	}
}
