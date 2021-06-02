#include<bits/stdc++.h>
using namespace std;
int p[10000000];
void solve(){
	for(int i=1;i<=10000000;i++){
		p[i]=i;
	}
	for(int i=2;i<=sqrt(10000000);i++){
		if(p[i]==i){
			for(int j=i*i;j<=10000000;j+=i){
				if(p[j]==j){
					p[j]=i;
				}
			}
		}
	}
}
int main(){
	solve();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<p[i]<<" ";
		}
		cout<<endl;
	}
}
