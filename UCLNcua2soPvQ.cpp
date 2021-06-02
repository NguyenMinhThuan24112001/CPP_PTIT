#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a,long long b){
	while(b!=0){
		int i=a%b;
		a=b;
		b=i;
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long m=UCLN(x,y);
		for(int i=1;i<=m;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
