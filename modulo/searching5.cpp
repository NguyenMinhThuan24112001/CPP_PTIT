#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[0]!=a[i]){
				cout<<a[0]<<" "<<a[i];
				dem++;
				break;
			}
		}
		if(dem==0) cout<<"-1";
		cout<<endl;
	}

   return 0;
}
