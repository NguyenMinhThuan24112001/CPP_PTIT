#include<bits/stdc++.h>
using namespace std;
void seive(int n){
	bool p[n+1];
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(n);i++){
		if(p[i]){
			for(int j=i*i;j<=n;j+=i){
				p[j]=false;
			}
		}
	}
	for(int i=1;i<=sqrt(n);i++){
		if(p[i]){
			cout<<i*i<<" ";
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		seive(n);
		cout<<endl;
	}
}
