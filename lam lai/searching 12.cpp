#include<bits/stdc++.h>
using namespace std;
long long solve(int a[],int n,int x){
	map<int,int> m;
	for(int i=0;i<n;i++){
		m[a[i]]=1;
	}for(int i=0;i<n;i++){
		if(m[a[i]]&&m[a[i]+x]){
			return 1;
			break;
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<solve(a,n,x)<<endl;
	}
}
