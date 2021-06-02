#include<bits/stdc++.h>
using namespace std;
long long modu(long long n,long long k){
	long long res=0;
	for(int i=1;i<=n;i++){
		res=((res%k)+(i%k))%k;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<modu(n,k)<<endl;
	}
}
