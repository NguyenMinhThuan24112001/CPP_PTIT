#include<bits/stdc++.h>
using namespace std;
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
		long long ans=-9999999999;
		for(int i=0;i<n;i++){
			long long res=1;
			for(int j=i;j<n;j++){
				res*=a[j];
				if(res>ans){
					ans=res;
				}
			}
		}
		cout<<ans<<endl;
	}
}
