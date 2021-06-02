#include<bits/stdc++.h>
using namespace std;
int n,x;
bool comp(pair<int,int> a, pair<int,int> b){
	if(abs(a.first-x)!=abs(b.first-x)){
		return abs(a.first-x)<abs(b.first-x);
	}
	else{
		return a.second<b.second;
	}
}
void solve(){
	cin>>n>>x;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v[i]=make_pair(x,i);
	}
	sort(v.begin(),v.end(),comp);
	for(pair<int,int>p:v){
		cout<<p.first<<" ";
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
