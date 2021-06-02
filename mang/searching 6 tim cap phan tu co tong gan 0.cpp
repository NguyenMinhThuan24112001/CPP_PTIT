#include<bits/stdc++.h>
using namespace std;
long long solve(int a[],int n){
	int res;
	int cnt=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum=0;
			sum+=abs(a[i]+a[j]);
			if(sum<cnt){
				cnt=sum;
				res=a[i]+a[j];
			}
		}
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<solve(a,n)<<endl;
	}
}
