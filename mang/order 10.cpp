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
			b[i]=a[i];
		}
		int dem=0;
		int min=a[0];
		for(int i=1;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					a[j]=0;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]!=0){
				if(a[i]>min){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}
