#include<bits/stdc++.h>
using namespace std;
void solve(long long n){
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n>1){
		cout<<n;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		solve(n);
		cout<<endl;
	}
}