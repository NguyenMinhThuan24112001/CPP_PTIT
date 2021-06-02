#include<bits/stdc++.h>
using namespace std;
void solve(long long a[],long long b[],long long c[],long long n1,long long n2,long long n3){
	int ok=1;
	int i=0,j=0,k=0;
	while(i<n1&&j<n2&&k<n3){
		if(a[i]==b[j]&&b[j]==c[k]){
			cout<<a[i]<<" ";
			i++;j++;k++;
			ok=0;
		}else if(a[i]<b[j]){
			i++;
		}else if(b[j]<c[k]){
			j++;
		}else{
			k++;
		}
	}
	if(ok==1){
		cout<<"-1";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n1,n2,n3;
		cin>>n1>>n2>>n3;
		long long a[n1],b[n2],c[n3];
		for(int i=0;i<n1;i++){
			cin>>a[i];
		}
		for(int i=0;i<n2;i++){
			cin>>b[i];
		}
		for(int i=0;i<n3;i++){
			cin>>c[i];
		}
		solve(a,b,c,n1,n2,n3);
		cout<<endl;
	}
}
