#include<bits/stdc++.h>
using namespace std;
bool check(string s,int k){
	int n=s.length();
	if(n<26){
		return false;
	}
	set<char> se;
	for(int i=0;i<n;i++){
		se.insert(s[i]);
	}
	if(26-se.size()<=k){
		return true;
	}return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		cout<<check(s,k)<<endl;
	}
}
