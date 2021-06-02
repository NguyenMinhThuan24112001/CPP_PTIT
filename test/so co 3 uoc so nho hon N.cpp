#include<bits/stdc++.h>
using namespace std;
bool p[1000000];
void seive(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(1000000);i++){
		if(p[i]){
			for(int j=i*i;j<=1000000;j+=i){
				p[j]=false;
			}
		}
	}
}
int main(){
	seive();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=1;i<=sqrt(n);i++){
			if(p[i]){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
	}
}
