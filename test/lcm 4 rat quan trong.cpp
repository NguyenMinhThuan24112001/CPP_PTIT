#include<bits/stdc++.h>
using namespace std;
long long a;
string b;
long long ucln(long long x ,long long y){
	while(y!=0){
		int i=x%y;
		x=y;
		y=i;
	}
	return x;
}
void solve(){
	cin>>a>>b;
	long long res=0;
	for(int i=0;i<b.length();i++){
		res=(res*10+b[i]-'0')%a;
	}
	cout<<ucln(res,a)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
