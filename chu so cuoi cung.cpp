#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	if(n%9==0){
		cout<<"9";
	}else{
		cout<<n%9;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
