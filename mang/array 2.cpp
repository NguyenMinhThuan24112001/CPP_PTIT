#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int c1=0;
		for(int i=0;i<n;i++){
			if(a[i]!=0){
				cout<<a[i]<<" ";
			}else{
				c1++;
		  }	
		}
		for(int i=0;i<c1;i++){
			cout<<0<<" ";
		}
		cout<<endl;
	}
}
