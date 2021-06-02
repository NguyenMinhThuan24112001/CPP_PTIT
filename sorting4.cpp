#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	set<int> a;
	map<int,int> ma;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		ma[x]++;
		a.insert(x);
	}
	vector<int> giao;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		ma[x]++;
		a.insert(x);
	}
	for(int x:a){
		cout<<x<<" ";
	}
	cout<<endl;
	for(pair<int,int> p:ma){
		if(p.second==2){
			cout<<p.first<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
