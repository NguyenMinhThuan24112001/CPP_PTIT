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
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		cout<<bcnn(a,b)<<" "<<ucln(a,b)<<endl;
	}
}
