#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long res=-999999999;
		for(int i=0;i<n;i++){
			long long sum=1;
			for(int j=i;j<n;j++){
				sum*=a[j];
				if(sum>res){
					res=sum;
				}
			}
		}
		cout<<res<<endl;
	}
}
