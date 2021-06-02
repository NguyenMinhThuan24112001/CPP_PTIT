#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			dem++;
		}
	}
	if(dem==0){
		return -1;
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<solve(a,n,k)<<endl;
	}
}
