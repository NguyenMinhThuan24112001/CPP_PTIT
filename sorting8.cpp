#include<bits/stdc++.h>
using namespace std;
int tam[5];
int n,m,a[100000],b[100000];
int dem(int x){
	if(x==0){
		return 0;
	}
	if(x==1){
		return tam[0];
	}
	int *pos=upper_bound(b,b+m,x);
	int ans=(b+m)-pos;
	ans+=tam[0]+tam[1];
	if(x==2){
		ans-=tam[3]+tam[4];
	}
	if(x==3){
		ans+=tam[2];
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		memset(tam,0,sizeof(tam));
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			if(b[i]<=4){
				tam[b[i]]++;
			}
		}
		sort(b,b+m);
		int ans=0;
		for(int i=0;i<n;i++){
			ans+=dem(a[i]);
		}
		cout<<ans<<endl;
	}
}
