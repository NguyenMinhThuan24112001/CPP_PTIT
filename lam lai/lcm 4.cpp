#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
	while(b){
		int i=a%b;
		a=b;
		b=i;
	}
	return a;
}
long long a;
string b;
void solve(){
	int res=0;
	for(int i=0;i<b.length();i++){
		res=(res*10+b[i]-'0')%a;
	}
	cout<<ucln(res,a)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		solve();
	}
}
