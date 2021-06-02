#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n],b[m];
		set<long long> se;
		map<long long,long long> ma;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
			ma[a[i]]++;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			se.insert(b[i]);
			ma[b[i]]++;
		}
		for(long long x:se){
			cout<<x<<" ";
		}
		cout<<endl;
		for(auto &p:ma){
			if(p.second>1){
				cout<<p.first<<" ";
			}
		}
		cout<<endl;
	}
}
