#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	int a[n][n];
	priority_queue<int> q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			q.push(a[i][j]);
			if(q.size()>k)
			q.pop();
		}
	}
	cout<<q.top()<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
