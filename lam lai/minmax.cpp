#include<bits/stdc++.h>
using namespace std;
void solve(long long m,long long s){
	long long tam;
	tam=s;
	long long lon[m],nho[m];
	if(s==0||s>9*m){
		cout<<"-1 -1";
		return;
	}
	for(int i=0;i<m;i++){
		if(s>=9){
			lon[i]=9;
			s-=9;
		}else{
			lon[i]=s;
			s=0;
		}
	}
	tam-=1;
		for(int i=m-1;i>0;i--){
			if(tam>=9){
				nho[i]=9;
				tam-=9;
			}else{
			nho[i]=tam;
			tam=0;}
		}
		nho[0]=tam+1;
	for(int x:nho){
		cout<<x;
	}cout<<" ";
	for(int x:lon){
		cout<<x;
	}
	cout<<endl;
}
int main(){
		long long m,s;
		cin>>m>>s;
		solve(m,s);
}
