#include<bits/stdc++.h>
using namespace std;
void solve(long long a[],long long b[],int n,int m){
	map<long long,long long> ma;
	for(int i=0;i<n;i++){
		ma[a[i]]++;
	}
	for(int i=0;i<m;i++){
		if(ma[b[i]]){
			for(int j=0;j<ma[b[i]];j++){
				cout<<b[i]<<" ";
			}
			ma[b[i]]=0;
		}
	}
	for(auto &p:ma){
		if(p.second){
			for(int j=0;j<p.second;j++){
				cout<<p.first<<" ";
			}
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		solve(a,b,n,m);
	}
}
