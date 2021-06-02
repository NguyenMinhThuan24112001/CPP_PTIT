#include<bits/stdc++.h>
using namespace std;
bool p[1000001];
void sieve(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=1000;i++){
		if(p[i]){
			for(int j=i*i;j<=1000001;j+=i){
				p[j]=false;
			}
		}
	}
}
int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=2;i<=n/2;i++){
			if(p[i]&&p[n-i]){
				cout<<i<<" "<<n-i;
				dem++;
				break;
			}
		}
		if(dem==0){
			cout<<"-1";
		}
		cout<<endl;
	}
}
