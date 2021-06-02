#include<bits/stdc++.h>
using namespace std;
void solve(long long a[],int n){
	set<long long> s;
	for(int i=0;i<n;i++){
		s.insert(a[i]);
	}
	for(int i=0;i<n;i++){
		if(s.find(i)!=s.end()){
			cout<<i<<" ";
		}
		else{
			cout<<-1<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		solve(a,n);
	}
}
