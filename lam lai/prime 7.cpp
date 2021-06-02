#include<bits/stdc++.h>
using namespace std;
long long solve(long long n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				cnt++;
				if(cnt>=2){
					return 0;
					break;
				}
				n/=i;
			}dem++;
		}
	}
	if(n>1){
		dem++;
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(solve(n)==3){
			cout<<1;
		}else{
			cout<<0;
		}
		cout<<endl;
	}
}
