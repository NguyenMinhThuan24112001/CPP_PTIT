#include<bits/stdc++.h>
using namespace std;
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
		long long mi=-9999999999;
		for(int i=0;i<n;i++){
			long long sum=1;
			for(int j=i;j<n;j++){
				sum*=a[j];
				if(sum>=mi){
					mi=sum;
				}
			}
		}
		cout<<mi<<endl;
	}
}
