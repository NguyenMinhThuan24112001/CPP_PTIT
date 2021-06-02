#include<bits/stdc++.h>
using namespace std;
bool p[1000001];
void seive(){
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
	seive();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int dem=0;
		for(int i=1;i<=sqrt(n);i++){
		if(p[i]){
			dem++;
		}
	}
	cout<<dem;
		cout<<endl;
	}
}
