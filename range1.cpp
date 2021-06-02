#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n];
		int pre[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i==0){
				pre[i]=a[i];
			}else{
				pre[i]=pre[i-1]+a[i];
			}
		}
		for(int j=0;j<q;j++){
			int x,y;
			cin>>x>>y;
			if(x==1){
				cout<<pre[y-1]<<endl;
			}else{
				cout<<pre[y-1]-pre[x-2]<<endl;
			}
		}
	}
}
