#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n){
	int sum=0;
	int left=a[0];
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	sum=sum-a[0];
	for(int i=1;i<n-1;i++){
		if(left==sum-a[i]){
			return i;}
			else{
				left+=a[i];
				sum-=a[i];
			}
		
	}
	return -1;
}
int main(){
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<solve(a,n);
}
