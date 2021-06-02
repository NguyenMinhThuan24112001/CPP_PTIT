#include<bits/stdc++.h>
using namespace std;
bool p[1000000001];
void sang(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(1000000001);i++){
		if(p[i]){
			for(int j=i*i;j<=1000000000;j+=i){
				p[j]=false;
			}
		}
	}
}
int main(){
		int n,m;
		cin>>n>>m;
		int min=n;
		if(min>m){
			min=m;
		}
		for(int j=min;j<=n+m-min;j++){
			if(p[j]){
				cout<<j<<" ";
			}
		}
		cout<<endl;
}
