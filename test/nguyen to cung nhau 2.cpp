#include<bits/stdc++.h>
using namespace std;
long long ngto(long long n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
long long phi(long long n){
	long long res=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
			}
			res-=res/i;
		}
	}
	if(n>1){
		res-=res/n;
	}
	if(ngto(res)==1){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<phi(n)<<endl;
	}
}
