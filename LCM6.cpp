#include<bits/stdc++.h>
using namespace std;
long long bcnn(long long a,long long b){
	if(!a){
		return b;
	}
	return bcnn(b%a,a);
}
int prime(int n,int m){
	int x;int y;
	if((n-m)%2!=0){
	return false;
}
	x=(n-m)/2;
	y=m+x;
	if(bcnn(x,y)==1){
		return true;
	}else{
		return false;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		n=(n*(n+1))/2;
		if(prime(n,m)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}
