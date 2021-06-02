#include<bits/stdc++.h>
using namespace std;
long long c[1001][1001];
long long mod=1000000007;
void init(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||i==0||j==i){
				c[i][j]=1;
			}else{
				c[i][j]=((c[i-1][j-1]%mod)+(c[i-1][j]%mod))%mod;
			}
		}
	}
}
int main(){
	init();
	int t;
	cin>>t;
	while(t--){
		int n,r;
		cin>>n>>r;
		cout<<c[n][r]<<endl;
	}
}
