#include<bits/stdc++.h>
using namespace std;
inline int tonum(char c){
	return c-'0';
}
long long solve(string s,int n,int m){
	long long d[m][n];
	memset(d,0,sizeof(d));
	d[0][tonum(s[0])%n]=1;
	for(int i=1;i<m;i++){
		d[i][tonum(s[i])%n]++;
		for(int j=0;j<n;j++){
			d[i][j]+=d[i-1][j];
			d[i][(j*10+tonum(s[i]))%n]+=d[i-1][j];
		}
	}
	return d[m-1][0];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		string s;
		cin>>m>>n>>s;
		cout<<solve(s,n,m)<<endl;
	}
}
