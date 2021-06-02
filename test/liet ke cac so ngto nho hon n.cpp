#include<bits/stdc++.h>
using namespace std;
bool p[10000];
void sieve(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(10000);i++){
		if(p[i]){
			for(int j=i*i;j<=10000;j+=i){
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
		for(int i=2;i<=n;i++){
			if(p[i]){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
