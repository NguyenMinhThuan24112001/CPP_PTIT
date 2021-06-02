#include<bits/stdc++.h>
using namespace std;
long long pt(long long n,long long k){
	long long dem=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			dem++;
			if(dem==k){
				return i;
				break;
			}
			n/=i;
		}
	}
	if(n>1){
		dem++;
		if(dem==k){
			return n;
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<pt(n,k)<<endl;
	}
}
