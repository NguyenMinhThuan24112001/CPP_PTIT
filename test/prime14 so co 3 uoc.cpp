#include<bits/stdc++.h>
using namespace std;
bool p[1000001];
void solve(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(1000001);i++){
		if(p[i]){
			for(int j=i*i;j<=1000001;j+=i){
				p[j]=false;
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
		for(int i=2;i<=sqrt(n);i++){
			if(p[i]){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
	}
}
