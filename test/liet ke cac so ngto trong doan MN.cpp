#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2){
		return 0;
	}for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int min=m;
		if(min>n){
			min=n;
		}
		for(int i=min;i<=m+n-min;i++){
			if(ngto(i)){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
