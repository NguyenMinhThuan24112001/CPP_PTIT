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
void[] powmod(long long x,long long y,long long z,long long n){
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		cout<<powmod(x,y,z,n)<<endl;
	}
}
