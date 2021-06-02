#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long m,n,a,b;
		cin>>m>>n>>a>>b;
		int min=m;
		if(min>n){
			min=n;
		}
		int dem=0;
		for(int i=min;i<=m+n-min;i++){
			if(i%a==0||i%b==0){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
