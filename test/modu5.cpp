#include<bits/stdc++.h>
using namespace std;
long long solve(string n,long long m){
	long long res=0;
	for(int i=0;i<n.length();i++){
		res=(res*10+n[i]-'0')%m;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		long long m;
		cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
}
