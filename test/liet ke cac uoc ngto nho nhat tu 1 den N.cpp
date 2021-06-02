#include<bits/stdc++.h>
using namespace std;
void pt(int n){
	int p[n+1];
	for(int i=0;i<=n;i++){
		p[i]=i;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(p[i]==i){
			for(int j=i*i;j<=n;j+=i){
				if(p[j]==j){
					p[j]=i;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<p[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		pt(n);
		cout<<endl;
	}
}
