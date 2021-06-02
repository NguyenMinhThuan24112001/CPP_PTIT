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
		int max=a[0],min=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>=max){
				max=a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]<=min){
				min=a[i];
			}
		}
		int x=0;
		for(int i=min+1;i<max;i++){
			int tam=0;
			for(int j=0;j<n;j++){
				if(a[j]==i){
					tam=0;
					break;
				}else{
					tam++;
				}
			}
			if(tam!=0){
				x++;
			}
		}
		cout<<x<<endl;
	}
}
