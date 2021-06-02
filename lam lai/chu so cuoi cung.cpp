#include<bits/stdc++.h>
using namespace std;
void solve(long long n){
	if(n%9==0){
		cout<<9;
	}else{
		cout<<n%9;
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		solve(n);
	}
}
