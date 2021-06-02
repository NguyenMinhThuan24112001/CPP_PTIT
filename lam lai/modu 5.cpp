#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
long long solve(string n,int m){
	long long sum=0;
	for(int i=0;i<n.length();i++){
		sum=(sum*10+n[i]-'0')%m;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		int m;
		cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
}
