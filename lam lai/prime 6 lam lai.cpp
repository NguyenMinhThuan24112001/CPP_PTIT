#include<bits/stdc++.h>
using namespace std;
bool p[10000000];
void solve(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(10000000);i++){
		if(p[i]){
			for(int j=i*i;j<=10000000;j+=i){
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
		for(int i=1;i<=n/2;i++){
			if(p[i]&&p[n-i]){
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
}
