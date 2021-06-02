#include<bits/stdc++.h>
using namespace std;
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
		long long dem=0;
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			if(a[i+1]-a[i]!=1){
				dem+=a[i+1]-a[i]-1;
			}
		}
		cout<<dem<<endl;
	}
}
