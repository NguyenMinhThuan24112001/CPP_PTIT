#include<bits/stdc++.h>
using namespace std;
bool p[10000001];
void solve(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(10000001);i++){
		if(p[i]){
			for(int j=i*i;j<=10000001;j+=i){
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
		int dem=0;
		int n;
		cin>>n;
		for(int i=2;i<=n/2;i++){
			if(p[i]&&p[n-i]){
				dem++;
				cout<<i<<" "<<n-i;
				break;
			}
		}
		if(dem==0){
			cout<<-1;
		}
		cout<<endl;
	}
}
