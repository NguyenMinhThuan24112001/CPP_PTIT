#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	int a[256]={0};
	int n=s.length();
	int dem;
	dem=n;
	for(int i=0;i<n;i++){
		a[s[i]]++;
	}
	for(int i=0;i<256;i++){
		if(a[i]>=2){
			dem+=(a[i]*(a[i]-1))/2;
		}
	}
	cout<<dem<<endl;
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
