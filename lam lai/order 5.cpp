#include<bits/stdc++.h>
using namespace std;
void solve(long long a[],long long n){
	long long ans=a[0];
	long long res=-1;
	for(int i=1;i<n;i++){
		if(a[i]>ans){
			res=max(res,a[i]-ans);
		}else if(a[i]<ans){
			ans=a[i];
		}
	}
	cout<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		solve(a,n);
	}
}
