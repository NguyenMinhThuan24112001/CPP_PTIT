#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
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
int solve(int n){
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
	if(ngto(res)){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(solve(n)){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
	}
}
