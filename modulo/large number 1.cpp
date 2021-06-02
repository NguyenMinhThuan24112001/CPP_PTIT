#include<bits/stdc++.h>
using namespace std;
void solve(string x,string y){
	long long res=0,res2=0;
	for(int i=0;i<x.length();i++){
		res=res*10+x[i]-'0';
	}
	for(int i=0;i<y.length();i++){
		res2=res2*10+y[i]-'0';
	}
	if(res>res2){
		cout<<res-res2<<endl;
	}else{
		cout<<res2-res<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		solve(x,y);
	}
}
