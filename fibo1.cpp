#include<bits/stdc++.h>
#define modulo 1000000007
using namespace std;
long long so(long long n){
	if(n<2){
		return 1;
	}
	long long a=0,b=1,c;
	while(n-->1){
		c=(a%modulo+b%modulo)%modulo;
		a=b;
		b=c;
	}
	return c;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<so(n)<<endl;
	}
}
