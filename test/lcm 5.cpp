#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
	while(b!=0){
		int i=a%b;
		a=b;
		b=i;
	}
	return a;
}
void solve(long long a,long long x,long long y){
	int m=ucln(x,y);
	for(int i=0;i<m;i++){
		cout<<a;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		solve(a,x,y);
		cout<<endl;
	}
}
