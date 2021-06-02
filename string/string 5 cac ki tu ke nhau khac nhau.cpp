#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	long long a[256]={0},ans=0;
	for(int i=0;i<s.length();i++){
		a[s[i]]++;
	}
	for(int i=0;i<s.length();i++){
		if(a[s[i]]>ans){
			ans=a[s[i]];
		}
	}
	long long n=s.length();
	if(2*ans<=n&&n%2==0){
		cout<<1;
	}else if(ans<n/2+1&&n%2==1){
		cout<<1;
	}else{
		cout<<0;
	}cout<<endl;
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
