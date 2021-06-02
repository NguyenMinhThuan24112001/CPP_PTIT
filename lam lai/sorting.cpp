#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		long long v1,v2;
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
