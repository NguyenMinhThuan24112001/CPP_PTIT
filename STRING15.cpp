#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	int n=s.length();
	int a[256]={0};
	for(int i=0;i<n;i++){
		a[s[i]]++;
	}
	int ans=n;
	for(int i=0;i<256;i++){
		if(a[i]>=2){
			ans+=(a[i])*(a[i]-1)/2;
		}
	}	return ans;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}
