#include<bits/stdc++.h>
using namespace std;
bool p[1000001];
void seive(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(1000001);i++){
		for(int j=i*i;j<=1000001;j+=i){
			p[j]=false;
		}
	}
}
int main(){
	seive();
	int t;
	cin>>t;
	while(t--){
		long long l,r,s;
		cin>>l>>r;
		int can=sqrt(l);
		if(can*can==l){
			s=can;
		}else{
			s=can+1;
		}
		int dem=0;
		for(int i=s;i<=sqrt(r);i++){
			if(p[i]){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
