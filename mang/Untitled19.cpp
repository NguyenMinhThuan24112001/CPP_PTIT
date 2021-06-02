#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n,int x,int y){
	int sum=0;
	for(int i=x-1;i<y;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int l,r;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=q;i++){
			cin>>l>>r;
			solve(a,n,l,r);
		}
	}
}
