#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==a[i+1]){
				a[i]=a[i]*2;
				a[i+1]=0;
				b[i]=a[i];
			}else{
				b[i]=a[i];
			}
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(b[i]!=0){
				cout<<b[i]<<" ";
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
