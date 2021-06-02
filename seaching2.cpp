#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m=l+(r-l)/2;
		if(a[m]==x){
			return 1;
		}else if(a[m]>x){
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<bs(a,n,x)<<endl;
	}
}
