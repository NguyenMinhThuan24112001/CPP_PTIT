#include<bits/stdc++.h>
using namespace std;
long long solve(int n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
				dem++;
			}
		}
	}
	if(n>1){
		dem++;
	}
	if(dem==3){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(solve(n)){
			cout<<1;
		}else{
			cout<<0;
		}
		cout<<endl;
	}
}
