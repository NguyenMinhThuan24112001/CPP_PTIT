#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	int n=s.length();
	int a[256]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]]++;
	}
	int res=-999;
	for(int i=0;i<s.length();i++){
		if(a[s[i]]>res){
			res=a[s[i]];
		}
	}
	if(2*res<=n&&n%2==0){
		cout<<1;
	}else if(res<n/2+1&&n%2==1){
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
