#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int n){
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;i++){
			sum+=a[j];
			if(sum==0){
				return true;
				break;
			}
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<solve(a,n)<<endl;
}
