#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b){
	while(b!=0){
		int i=a%b;
		a=b;
		b=i;
	}
	return a;
}
long long LCM(long long a, long long b){
	return a*b/GCD(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long kq=1;
		for(long long i=1;i<=n;i++){
			kq=LCM(kq,i);
		}
		cout<<kq;
		cout<<endl;
	}
}
