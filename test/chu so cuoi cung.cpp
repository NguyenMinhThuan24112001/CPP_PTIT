#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%9==0){
			cout<<9;
		}else{
			cout<<n%9;
		}
		cout<<endl;
	}
}
