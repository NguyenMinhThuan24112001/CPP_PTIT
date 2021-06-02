#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long m){
	for(int i=0;i<=m-1;i++){
		if(i*a%m==1){
			return i;
			break;
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,m;
		cin>>a>>m;
		cout<<solve(a,m)<<endl;
	}
}
