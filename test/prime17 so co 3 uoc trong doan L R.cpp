#include<bits/stdc++.h>
using namespace std;
bool p[10000000];
void seive(){
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
	seive();
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		long long can=sqrt(l);
		long long start;
		if(can*can==l){
			start=can+1;
		}else{
			start=can;
		}
		int dem=0;
		for(int i=start;i<=sqrt(r);i++){
			if(p[i]){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
