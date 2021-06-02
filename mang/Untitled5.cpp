#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]!=0){
				cout<<a[i]<<" ";
			}else{
				dem++;
			}
		}
		for(int i=0;i<dem;i++){
			cout<<"0 ";
		}
		cout<<endl;
	}
}
