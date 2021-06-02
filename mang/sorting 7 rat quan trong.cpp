#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int n,v1,v2;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				v1=i;
				break;
			}
		}
		for(int i=n-1;i>=v1;i--){
			if(a[i]!=b[i]){
				v2=i;
				break;
			}
		}
		cout<<v1+1<<" "<<v2+1<<endl;
	}
}
