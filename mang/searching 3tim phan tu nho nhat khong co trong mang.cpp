#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i]!=i+1){
			return i+1;
			break;
		}
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
		for(int i=0;i<n-1;i++){
			cin>>a[i];
		}
		cout<<solve(a,n)<<endl;
	}
}
