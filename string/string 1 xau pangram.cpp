#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int solve(string s,int k){
	int n=s.length();
	if(n<26){
		return 0;
	}
	set<char> se;
	for(int i=0;i<n;i++){
		se.insert(s[i]);
	}
	if(26-se.size()<=k){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		if(solve(s,k)){
			cout<<1;
		}else{
			cout<<0;
		}
		cout<<endl;
	}
}
