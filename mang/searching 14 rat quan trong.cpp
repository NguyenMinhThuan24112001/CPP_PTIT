#include<bits/stdc++.h>
using namespace std;
long long solve(int a[],int n){
	set<long long> se;
	for(int i=0;i<n;i++){
		if(se.find(a[i])!=se.end()){
			return a[i];
		}
		se.insert(a[i]);
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}cout<<solve(a,n)<<endl;
	}
}
