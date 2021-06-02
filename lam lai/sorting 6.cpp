#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int c1=0,c2=0,c3=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				c1++;
			}else if(a[i]==1){
				c2++;
			}else if(a[i]==2){
				c3++;
			}
		}
			for(int i=0;i<c1;i++){
				cout<<"0 ";
			}
			for(int i=0;i<c2;i++){
				cout<<"1 ";
			}
			for(int i=0;i<c3;i++){
				cout<<"2 ";
			}
			cout<<endl;
		}
}
