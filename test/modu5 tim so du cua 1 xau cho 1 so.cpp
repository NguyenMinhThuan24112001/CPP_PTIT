#include<bits/stdc++.h>
using namespace std;
long long solve(string s,long long k){
	long long res=0;
	for(int i=0;i<s.length();i++){
		res=(res*10+s[i]-'0')%k;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long k;
		cin>>s>>k;
		cout<<solve(s,k)<<endl;
	}
}
