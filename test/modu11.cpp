#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long b,long long c){
	if(b==1){
		return a%c;
	}
	long long x=solve(a,b/2,c);
	if(b%2==1){
		return (x%c+x%c+a%c)%c;
	}else if(b%2==0){
		return (x%c+x%c)%c;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<solve(a,b,c)<<endl;
	}
}
