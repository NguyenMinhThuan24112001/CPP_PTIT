#include<bits/stdc++.h>
using namespace std;
long long solve(string s){
	int a[256]={0};
	int n=s.length();
	for(int i=0;i<s.length();i++){
		a[s[i]]++;
	}
	int dem=n;
	for(int i=0;i<256;i++){
		if(a[i]>=2){
			dem+=(a[i]*(a[i]-1))/2;
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}
