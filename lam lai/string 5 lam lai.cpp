#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	int a[256]={0};
	int n=s.length();
	for(int i=0;i<s.length();i++){
		a[s[i]]++;
	}
	int ans=-1;
	for(int i=0;i<s.length();i++){
		if(a[s[i]]>ans){
			ans=a[s[i]];
		}
	}
	if(2*ans<=n&&n%2==0){
		cout<<"1";
	}else if(ans<n/2+1&&n%2==1){
		cout<<"1";
	}else{
	    cout<<"0";
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
