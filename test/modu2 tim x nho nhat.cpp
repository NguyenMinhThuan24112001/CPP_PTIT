#include<bits/stdc++.h>
using namespace std;
int modu(int a,int m){
	for(int i=1;i<=m-1;i++){
		if(i*a%m==1){
			return i;
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m;
		cin>>a>>m;
		cout<<modu(a,m)<<endl;
	}
}
