#include<bits/stdc++.h>
using namespace std;
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
		long long dem=0;
		sort(a,a+n);
		int hie=0;
		for(int i=0;i<n;i++){
			int j=lower_bound(a,a+n,a[i]+x)-a;
			hie=j-i-1;
			dem+=hie;
		}
		cout<<dem<<endl;
	}
}
