#include<bits/stdc++.h>
using namespace std;
void trai(int a[],int n){
	int tam=a[0],i;
	for( i=0;i<n-1;i++){
		a[i]=a[i+1];
	}
	a[i]=tam;
}
void left(int a[],int d,int n){
	for(int i=0;i<d;i++){
		trai(a,n);
	}
}
void solve(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		left(a,d,n);
		solve(a,n);
		cout<<endl;
	}
}
