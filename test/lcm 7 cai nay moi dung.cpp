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
	return (a*b)/(ucln(a,b));
}
void solve(long long x,long long y,long long z,long long n){
	long long m=bcnn(x,y);
	long long t=bcnn(m,z);
	long long bc=pow(10,n-1);
	if(bc%t==0){
		cout<<bc;
	}else{
		long long tam=(bc/t)*t;
		if(tam+t<pow(10,n)){
			cout<<tam+t;
		}else{
			cout<<-1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		solve(x,y,z,n);
		cout<<endl;
	}
}
