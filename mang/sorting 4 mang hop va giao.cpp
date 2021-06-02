#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		set<long long> se;
		map<long long,long long> m;
		for(int i=0;i<n;i++){
			int a1;
			cin>>a1;
			m[a1]++;
			se.insert(a1);
		}
		for(int i=0;i<k;i++){
			int a2;
			cin>>a2;
			m[a2]++;
			se.insert(a2);
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

