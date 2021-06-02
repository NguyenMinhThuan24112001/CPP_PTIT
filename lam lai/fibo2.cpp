#include<bits/stdc++.h>
using namespace std;
long long solve(long long n){
	if(n==0||n==1){
		return 1;
	}
	long long f1=0,f2=1;
	for(int i=1;i<=92;i++){
		long long fn=f1+f2;
		if(fn==n){
			return 1;
		}
		f1=f2;
		f2=fn;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(solve(n)){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
		cout<<endl;
	}
}
