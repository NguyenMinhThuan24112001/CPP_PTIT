#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int x){
	int vt=-1;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			vt=i+1;
			break;
		}
	}
	return vt;
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
