#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<n;i++){
			cin>>a[i];
		}
		int res=n;
		sort(a+1,a+n);
		for(int i=1;i<n;i++){
			if(a[i]!=i){
				res=i;
				break;
			}
		}
		cout<<res<<endl;
	}
}
