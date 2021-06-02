#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,m;
	cin>>n>>m;
	int min=n;
	if(min>m){
		min=m;
	}
	for(int i=min;i<=m+n-min;i++){
		if(ngto(i)){
			cout<<i<<" ";
		}
	}
}
