#include<bits/stdc++.h>
using namespace std;
void seive(long long n){
	bool p[n+1];
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=0;i<=sqrt(n);i++){
		if(p[i]){
			for(int j=i*i;j<=n;j+=i){
				p[j]=false;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(p[i]){
			cout<<i<<" ";
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		seive(n);
		cout<<endl;
	}
}
