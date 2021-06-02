#include<bits/stdc++.h>
using namespace std;
long long solve(string m,long long k){
	long long res=0;
	for(int i=0;i<m.length();i++){
		res=(res*10+m[i]-'0')%k;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string m;
		long long k;
		cin>>m>>k;
		cout<<solve(m,k)<<endl;
	}
}
