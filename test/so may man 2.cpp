#include<bits/stdc++.h>
using namespace std;
long long solve(string s){
	long long res;
	long long n=s.length();
	if(n<2){
		return 0;
	}for(int i=0;i<n;i++){
		res=(s[n-2]-'0')*10+(s[n-1]-'0');
	}
	if(res==86){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}
