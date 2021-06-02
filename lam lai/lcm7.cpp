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
long long bcnn(long long a,long long b){
	return (a*b)/ucln(a,b);
}
void solve(long long x,long long y,long long z,long long n){
	long long m=bcnn(x,y);
	long long a=bcnn(m,z);
	long long b=pow(10,n-1);
	if(b%a==0){
		cout<<b;
	}else{
		if((b/a)*a+a<pow(10,n)){
			cout<<(b/a)*a+a;
		}else{
			cout<<"-1";
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		solve(x,y,z,n);
	}
}
