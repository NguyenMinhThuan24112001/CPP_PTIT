#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			sum=((sum%mod)+((a[i]%mod)*(a[j]%mod))%mod)%mod;
		}
	}
	cout<<sum;
}
