#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	int a[256]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]]++;
	}
	for(int i=0;i<s.length();i++){
		if(a[s[i]]==1){
			cout<<s[i];
		}
	}
	cout<<endl;
}
void solve2(string s){
	map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	for(int i=0;i<s.length();i++){
		if(m[s[i]]==1){
			cout<<s[i];
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve2(s);
	}
}
