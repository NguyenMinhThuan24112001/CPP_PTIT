#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],b[k];
		set<long long> se;
		map<long long,long long> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
			se.insert(a[i]);
		}
		for(int i=0;i<k;i++){
			cin>>b[i];
			m[b[i]]++;
			se.insert(b[i]);
		}
		for(int x:se){
			cout<<x<<" ";
		}
		cout<<endl;
		for(auto& p:m){
			if(p.second>=2){
				cout<<p.first<<" ";
			}
		}
		cout<<endl;
	}
}
