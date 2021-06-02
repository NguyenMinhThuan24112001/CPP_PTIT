#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n){
	int min=a[0];
	int res=-1;
	for(int i=1;i<n;i++){
		if(min<a[i]){
			res=max(res,a[i]-min);
		}else if(min>a[i]){
			min=a[i];
		}
	}
	cout<<res<<endl;
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
		}
		solve(a,n);
	}
}
