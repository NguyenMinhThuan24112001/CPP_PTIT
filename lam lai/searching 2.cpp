#include<bits/stdc++.h>
using namespace std;
long long solve(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return 1;
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
