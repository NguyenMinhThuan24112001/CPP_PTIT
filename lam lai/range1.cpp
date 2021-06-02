#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=q;i++){
			int l,r;
			cin>>l>>r;
			int sum=0;
			for(int j=l-1;j<r;j++){
				sum+=a[j];
			}
			cout<<sum<<endl;
		}
		cout<<endl;
	}
}
