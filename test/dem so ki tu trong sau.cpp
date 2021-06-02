#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	int x[256]={0};
	for(int i=0;i<s.length();i++){
		x[s[i]]=1;
	}
	int dem=0;
	for(int i=0;i<256;i++){
		dem+=x[i];
	}
	return dem;
}
int solve2(string s){
	set<char> se;
	for(int i=0;i<s.length();i++){
		se.insert(s[i]);
	}
	return (int)se.size();
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		cout<<solve<<endl;
	}
}
