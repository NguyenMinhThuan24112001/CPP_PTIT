#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long n,r, c[1000][1000];
void solve(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<=i;j++){
			if(i==0||j==0||i==j){
				c[i][j]=1;
			}else{
				c[i][j]=((c[i-1][j-1]%mod)+(c[i-1][j]%mod))%mod;
			}
		}
	}
}
int main(){
	solve();
	int t;
	cin>>t;
	while(t--){
		cin>>n>>r;
		cout<<c[n][r]<<endl;
	}
}
