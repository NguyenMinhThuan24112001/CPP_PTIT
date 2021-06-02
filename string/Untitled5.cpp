#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	int max=-1;
	int m[26]={0};
	for(int i=0;i<=s.length();i++){
		m[s[i]-'a']++;
	}
	for(int i=0;i<=s.length();i++){
		if(max<m[i]){
			max=m[i];
		}
	}
	int n=s.length()-1;
	if(max<=n/2+1){
		cout<<1;
	}else{
		cout<<0;
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
}
