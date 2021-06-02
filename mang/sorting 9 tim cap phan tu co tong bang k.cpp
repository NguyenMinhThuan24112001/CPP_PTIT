#include<bits/stdc++.h>
using namespace std;
long long solve(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				dem++;
			}
		}
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

