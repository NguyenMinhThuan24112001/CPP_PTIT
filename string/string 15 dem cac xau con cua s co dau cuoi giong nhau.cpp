#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	int a[256]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]]++;
	}
	int ans=s.length();
	for(int i=0;i<256;i++){
		if(a[i]>=2){
			ans+=(a[i]*(a[i]-1))/2;
		}
	}
	cout<<ans<<endl;
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
