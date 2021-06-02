#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long cnt=-999999999;
		for(int i=0;i<n;i++){
			long long res=1;
			for(int j=i;j<n;j++){
				res*=a[j];
				if(res>cnt){
					cnt=res;
				}
			}
		}
		cout<<cnt<<endl;
	}
}
